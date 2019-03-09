import re
import pandas as pd
import numpy as np
import nltk
from nltk.corpus import stopwords
nltk.download('stopwords')
from ast import literal_eval
from sklearn import model_selection

def read_data(filename):
    data = pd.read_csv(filename, sep='\t')
    data['tags'] = data['tags'].apply(literal_eval)
    return data
  
data = read_data("data/train.tsv")

data.head()

# Splitting of data set 

X_train,X_test,Y_train,Y_test  = model_selection.train_test_split(data['title'],data['tags'],test_size=0.2)

RE_REPLACE_BY_SPACE = re.compile('[/(){}\[\]\|@,;]')
RE_BAD_SYMBOLS = re.compile('[^0-9a-z #+_]')
STOPWORDS = set(stopwords.words('english'))
RE_STOPWORDS = [r"\b"+item+r"\b" for item in STOPWORDS]
RE_STOPWORDS = "|".join(RE_STOPWORDS)

def text_prepare(text):
    
    text = text.lower()
    text = re.sub(RE_REPLACE_BY_SPACE,' ',text)
    text = re.sub(RE_BAD_SYMBOLS,"",text)
    text = re.sub(RE_STOPWORDS,"",text)
    text = text.split(' ')
    text = [text[i] for i in range(len(text)) if len(text[i]) > 0]    
    return " ".join(text)
    
    
def test_text_prepare():
    examples = ["SQL Server - any equivalent of Excel's CHOOSE function?",
                "How to free c++ memory vector<int> * arr?"]
    answers = ["sql server equivalent excels choose function", 
               "free c++ memory vectorint arr"]
    for ex, ans in zip(examples, answers):
        
        if text_prepare(ex) != ans:
            return "Wrong answer for the case: '%s'" % ex
    return 'Basic tests have passed.'

print(test_text_prepare())

tags_counts = {}
words_counts = {}

for title in data['title']:
  for word in text_prepare(title).split(' '):
      if word in words_counts:
        words_counts[word] += 1
      else:
        words_counts[word] = 1

for tags in data['tags']:
  for tag in tags:
    if tag in tags_counts:
      tags_counts[tag] += 1
    else:
      tags_counts[tag] = 1
print("Top 3 words: ",sorted(words_counts,key=words_counts.__getitem__,reverse=True)[:3])
print("Top 3 tags: ",sorted(tags_counts,key=tags_counts.__getitem__,reverse=True)[:3])

#
#  Bag of words 
#

DICT_SIZE = 5000
TOP_WORDS = sorted(words_counts,key=words_counts.__getitem__,reverse=True)[:DICT_SIZE]
WORDS_TO_INDEX = {}

for i in range(len(TOP_WORDS)):
  WORDS_TO_INDEX[TOP_WORDS[i]] = i

def my_bag_of_words(text, words_to_index, dict_size):
    
    result_vector = np.zeros(dict_size)
    words = text.split(' ')
    for word in words:
      if word in words_to_index:
        result_vector[words_to_index[word]] += 1
    return result_vector
  
def test_my_bag_of_words():
    words_to_index = {'hi': 0, 'you': 1, 'me': 2, 'are': 3}
    examples = ['hi how are you']
    answers = [[1, 1, 0, 1]]
    for ex, ans in zip(examples, answers):
        if (my_bag_of_words(ex, words_to_index, 4) != ans).any():
            return "Wrong answer for the case: '%s'" % ex
    return 'Basic tests have passed.'

print(test_my_bag_of_words())
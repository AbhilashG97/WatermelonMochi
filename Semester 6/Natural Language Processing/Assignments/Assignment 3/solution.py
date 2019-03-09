import nltk
nltk.download('stopwords')
from nltk.corpus import stopwords

from ast import literal_eval
import pandas as pd
import numpy as np

def read_data(filename):
    data = pd.read_csv(filename, sep='\t')
    data['tags'] = data['tags'].apply(literal_eval)
    return data

train = read_data('data/train.tsv')
validation = read_data('data/validation.tsv')
#Consider validation set as test set
test = pd.read_csv('data/text_prepare_tests.tsv', sep='\t')

print(train.head())

#X_train, y_train = train['title'].values, train['tags'].values
#X_val, y_val = validation['title'].values, validation['tags'].values
#X_test = test['title'].values


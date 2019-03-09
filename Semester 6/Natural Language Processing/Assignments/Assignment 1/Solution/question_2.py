# @author Abhilash G [AM.EN.U4CSE16002]
# Question 2 of NLP Assignment

from nltk.tokenize import sent_tokenize, word_tokenize

my_string = "Let's write some RegularExpressions!  All should participate equally. Won't that be great?  All 56 students must upload the assignments"

sentences = sent_tokenize(my_string)
print(sentences)

word_tokens = word_tokenize(sentences[3])
print(word_tokens)

unique_word_tokens = set(word_tokenize(my_string))
print(unique_word_tokens)
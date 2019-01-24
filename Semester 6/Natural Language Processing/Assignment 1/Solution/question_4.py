# @author Abhilash G [AM.EN.U4CSE16002]
# Question 4 of NLP Assignment

from nltk.tokenize import regexp_tokenize, TweetTokenizer

tweets=['I’ve retrieved the best #nlp exercise  for the class till now! It is done #python', '#NLP is super cool!  #learning', 'Thanks @analytics :) #nlp #python']

tweet_input = "".join(tweet for tweet in tweets)

regex_pattern_hashtag = r'([#])([a-z\d_]+)'
regex_pattern_hashtag_and_mentions = r'([@#])([a-z\d_]+)'

print(regexp_tokenize(tweet_input, regex_pattern_hashtag))

print(regexp_tokenize(tweet_input, regex_pattern_hashtag_and_mentions))

tknzr = TweetTokenizer()
output = tknzr.tokenize(tweet_input)

print(output)
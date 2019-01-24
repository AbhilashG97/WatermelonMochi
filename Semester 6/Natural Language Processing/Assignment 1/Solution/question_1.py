# @author Abhilash G [AM.EN.U4CSE16002]
# Question 1 of NLP Assignment

import re

my_string = """Let's write some RegularExpressions!  All should participate equally. Won't that be great?  All 56 students must upload the assignments
""" 

sentences = re.split(r'[.?!]\s*', my_string)
print("Sentences -> "+str(sentences))

capital_words = re.findall(r'[A-Z][a-z]+', my_string)
print("Capital words -> "+str(capital_words))

words = re.split(r'\\s+', my_string)
print("Words -> "+str(words))

numbers = re.findall(r'[0-9]+', my_string)
print("Numbers -> "+str(numbers))
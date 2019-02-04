# Pattern Recognition Assignment 1 

__author__ = "Abhilash G"
__email__ = "abhilashg@am.students.amrita.edu"

import pandas as pd
import csv
import numpy as np
import random

reader = csv.reader(open("data/testing_data.csv", "rt"), delimiter=",")
testing_data = list(reader)
test_data = np.array(testing_data)
test_data = pd.DataFrame(test_data)

print(test_data)

print('test data dimension : ', test_data.shape)

train_data = pd.read_csv('data/training_data.csv')

print("train dimension : ",train_data.shape)

print(train_data.head(1))

data = pd.concat([train_data,test_data], sort=False)
data = data.fillna(1)

print('Shape of the concatented data is : ',data.shape)

# Randomizing the data set 
data = data.sample(frac=1)

train_data, validation_data, test_data = np.split(data, [int(.5 * len(data)), int(.75 * len(data))])

# Displaying all the distributions 

print("train shape after distributing 50% :", train_data.shape)
print("validation shape after distributing 25% :", validation_data.shape)
print("test shape after distributing 25% :", test_data.shape)
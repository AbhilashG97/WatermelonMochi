# Logistic Regression

This section will contain my notes on Logistic Regression. 

## Introduction

Logistic Regression is a classification algorithm that can classify data into descrete classes. 

Here the output is limited to descrete values. 

## Can Linear Regression be used to classify input into classes?

No, linear regression cannot be used for classification problems. 

To understand this better let us consider the plot shown below - 

<em>graph</em>

We can see that the hypothesis classifies the data points quite well. In order to classify the data, let us consider a threshold value of 0.5
Thus, all the data points above 0.5 will be classified into one class and the rest of the points will be classified as the other class.

Everything seems to be working fine till now. Let us now introduce another data as shown in the graph below -

<em>graph</em>

Now, the linear regression hypothesis will look somewhat different and the threshold value will also be different. 

Because of the new hypothesis, most of the data will be missclassified. This is the problem of using linear regression for classification. Depending on the data linear regression might classify the data correctly and at times incorrectly.

Also, linear regression will give values which could be less than 0 and greater than 1 which is not required in a classification problem that needs its output in either 0 or 1. 


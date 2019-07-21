# Logistic Regression

This section will contain my notes on Logistic Regression. 

## Introduction

Logistic Regression is a classification algorithm that can classify data into descrete classes. 

Here the output is limited to descrete values. 

For a binary classification problem the output ```y``` is limited two values - 0 and 1. The value ```0``` usually represents the absence of something whereas the value ```1``` represents the presence of something. 

## Can Linear Regression be used to classify input into classes?

No, linear regression cannot be used for classification problems. 

To understand this better let us consider the plot shown below - 

<p align="center"><img src ="images/graph-1.png"/></p>

We can see that the hypothesis classifies the data points quite well. In order to classify the data, let us consider a threshold value of 0.5
Thus, all the data points above 0.5 will be classified into one class and the rest of the points will be classified as the other class.

Everything seems to be working fine till now. Let us now introduce another data as shown in the graph below -

<p align="center"><img src ="images/graph-2.png"/></p>

Now, the linear regression hypothesis looks somewhat different because of the new value.  

Because of the new hypothesis, most of the data will be missclassified. This is the problem of using linear regression for classification. Depending on the data linear regression might classify the data correctly or incorrectly.

Also, linear regression will give values which could be less than 0 and greater than 1 which is not required in a classification problem that needs its output in either 0 or 1. 

## Hypothesis Representation

The logistic regression requires the hypothesis to give values between the range of 0 and 1. In order to achieve that the sigmoid function or the logistic function is used.

The sigmoid function is shown below - 

<p align="center"><img src ="images/sigmoid.jpg"/></p>

The graph for the same can also be found below - 

<p align="center"><img src ="images/sigmoid.png"/></p>

If the sigmoid function is used in the hypothesis of linear regression it can give valid results for logistic regression. 

Hence, the hypothesis for the logistic regression is as follows - 

<p align="center"><img src ="images/hypothesis.jpg"/></p>

:warning: The logistic regression gives the output with respect to output value of ```y=1```, which means that if we get a binary classification problem of classifying tumors and we get the output as 0.7; this would imply that the person has 0.7 chance of having the tumor(i.e. result ```y=1``` has a 0.7 chance of occuring).

<p align="center"><img src ="images/probability.png"/></p>

## Decision Boundary

If we have a closer look at the graph for the sigmoid function we'll realize that the value of ```g(z)``` is greater than or equal to ```0.5``` whenever z is greater than or equal to ```0```. And similarly, ```g(z)``` is less than ```0.5``` whenever ```z``` is less than ```0```. 

If we apply the same analogy to the hypothesis for logistic regression, we can conclude that - 


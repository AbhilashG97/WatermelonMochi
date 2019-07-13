# Linear Regression

This document will contain my notes on Linear Regression. 

## What is Linear Regression?

Linear Regression is a type of supervised learning algorithm that learns labelled data and predicts the output based on what it has learned. 

Let's take an sample data set and try to understand what linear regression means. 

The following data contains the ```number of hours a student studies``` and his/her ```grades```.

A sample plot can be found below -

<p align="center"><img src ="images/hours-vs-grades.png"/></p>

:boom: What we want to predict from the data is the score of a student given the number of hours a student works. 

This can be done with the help of a hypothesis. 

### What is a hypothesis?

A ```hypothese``` is a function that takes input values(in this case the number of hours a student studies) and spits output values(in this case, the overall grade of a student). 

The hypothesis can be reporesented as follows - 

<p align="center"><img src ="images/hypothesis.jpg"/></p>

:warning: For historical reasons, this function h is called a hypothesis. 

A pictorial representation can be found below - 

<p align="center"><img src ="images/hypothesis-pictorial.png"/></p>

:boom: A hypothesis is a function of the input. 

### Cost Function

The cost function tells us how good a hypothesis is. For a given dataset, there can be many hypotheses. 

The cost function helps us choose a good hypothesis by minimizing its parameters. A hypothesis depends on its parameters, so minimizing the parameters will inturn minimize the hypothesis. 

The cost function of a hypothesis is calculated by subtracting the output of the hypothesis with the actual output(i.e ```y```) and taking its ```Mean Squared Error```.

The cost function is given by -

<p align="center"><img src ="images/cost-function.jpg"/></p>


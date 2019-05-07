# NLP Lecture Notes - DAY SIX 

## Spelling Correction : Edit Distance

In this section we'll see how to deal with noisy data. Noisy data here means data that has a lot of spelling errors. Our intention is to rectify those spelling errors. To rectify the errors the following can be done - 

1. Find words that are closest to the mispelled word. 
1. Out of the words that we find, we need to look for the word that is closest among all the words that we have found.
1. In order to find the closest word, we need a **distance metric**. The required **distance metric** can be ```edit distance```.

### Minimum Edit Distance

In this algorithm we need to find the minimum distance between two strings. The distance is calculated based on certain operations being perfromed on the two words.

The following operations can be performed -

1. Insertion 
1. Deletion 
1. Substitution

Each operation has a cost, the word which ends up with the minimum cost after performing the required operations will be closest to a given mispelled word. 

:warning: The operation also has to be performed in such a way that the cost is minimum. 

For example, let's say that we want to convert **intention** to **execution**. The cost for the conversion will as follows depending upon the algorithm - 

![screenshot](#edit-distance)

1.  **Levenshtein**

    In this variation, each operation has a cost of 1.

1.  **Alternate version**

    Here, the substitution operation is given the cost of two and the other operations have a cost of one. 

#### How to find the Minimum Edit Distance? 

The following is done to find the minimum edit distance - 

Let us assume that the two strings are ```X``` and ```Y```.

1. Let the two strings be in the form a vector of size of ```n``` and ```m``` respectively.

1. We define a matrix ```D(n, m)``` which will calculate the distance between ```X[1..n]``` and ```Y[1..m]```.

Dynamic programming can be used to calculate ```D(n, m)```. 

:warning: This algorithm can be made better by also incorporating a backtrace. 

The time and space complexity for this algorithm is ```O(nm)```.



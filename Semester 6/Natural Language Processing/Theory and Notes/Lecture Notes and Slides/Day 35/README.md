# NLP Lecture Notes - DAY THIRTY FIVE

This lecture is about **Word Embeddings**. 

## What are word vectors?

**Word vectors** are simply vector of weights. 

In a simple 1-of-N (or **one-hot**) encoding every word in the vector is associated with a word in the vocabulory.

:warning: The encoding of a given word is simply the vector in which the corresponding element is set to one, and all other elements zero.

Here is how one-hot encoding looks like - 

![one-hot-encoding](#)

:boom: One of the disadvantages of one-hot embeddings is that, similarity amongst words cannot be determined. If we consider the one-hot embeddings of two words and try to calculate the similarity, we will not get the required result. The comparision we can do with one-hot encoding is word equality. 

## Word2Vec - A distributed representation

Any word in a corpus is given a distributional representation by an embedding - 

![word2vec](#)

where ```d-dimensional vector```, which is mostly learnt!

The following is done to obtain a distributed representation - 

1. Take a word vector with several hundred dimeneions (like 1000).
1. Each word is represented by a distribution of weights across those elements.
1. So, instead of a one-one mapping, the representation of a word is spread across all of the elements in the vector. 
1. Each element in the vector contributes to the definition of many words.


# NLP LECTURE NOTES - DAY FIVE

## What is tokenization?

> Tokenization is the process of segmenting a string of characters into words.

:warning: Depending on the case we may have to perform ```sentence segmentation``` as well.

## Sentence Segmentation

In layman terms, it is the task of deciding when a sentence begins or ends.

```Sentence Segementation``` is not a trivial task and it can get pretty complex. For instance, in case of abbreviations the period symbol is used, which is also used to mark the end of a sentence. 

:warning: One way to solve this problem is to construct a decision tree. A decision tree is nothing more than a set of if-else statements that decides whether a sentence ends or not.

:warning: Another way is to make use of certain features along with the ```period(.)``` symbol such as wether the next word starts with a lowercase letter or an uppercase letter.

:warning: While constructing the decision tree, it is important to pay attention to the features that are being selected. 

## Word Tokenization

It is also known as ```Word Segementation```. It is the process of extacting words from a sentence. Word tokenization can also get pretty complex. 

Word tokenization can become difficult with compound words, i.e. words that are created by combining different words. A few examples are words like - ```aren't```, ```couldn't```, ```shouldn't``` etc. 

:warning: Also, in certain languages ```word tokenization``` can be even more difficult, such as in Sanskrit. 

:warning: In languages like Japanese and Chinese it is quite difficult to find words present in a sentence as they are not space separated. 

Certain algorithms can be used to perform ```Word Segmentation```.

## Text Normalization 

```Text Normalization``` can be done in number of ways. It is done to remove unnecesary information from the data. A few of them are mentioned below - 

1.  ```Case Folding```

    Here, all letters reduced to lower case. However, in certain cases it should not be performed. 

1.  ```Lemmatization```

    Here, all infections or variant forms to base forms. 

    :warning: Words that are produced after lemmatization belong to the dictionary.

    Smaller meaningful units from which words are built-up are called ```morphemes```. Morphology studies the internal structure of words. 

    ```Morphemes``` are divided into two categories -

    1.  ```Stems```

        > The core meaning bearing units.

    1.  ```Affixes```

        > These are bits and pieces adhering to stems to change their meanings and grammatical functions.

1.  ```Stemming```

    Here a word is reduced to their stems. It is a crude chopping of words. Words obtained from stemming may or may not belong to the dictionary. 

    :warning: Porter's algorithm is of the algorithms that can be used to perform stemming. Porter's algorithm is a nothing more than a set of if-else rules.
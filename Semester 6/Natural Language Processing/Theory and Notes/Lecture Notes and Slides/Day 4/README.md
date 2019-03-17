# NLP LECTURE NOTES - DAY FOUR

## Content Words vs Function Words

Any vocabulory will contain both content words and function words. 

**Function words** have little lexical meaning and they only provide structure to a sentence. 

On the other hand, **Content words** have important and they determine what the sentence is about.

:exclamation: If the content words cannot be identified we won't be able to get much information out of a sentence. 

**Function words** are closed-class words. A few examples of closed-class words are prepositions, pronouns, auxiliary words, conjunctions, grammatical articles, particles etc. 

:warning: **Function words** provide important grammatical structure to a sentence. 

## Type and Tokens in a Language

A **type** in a language refers the number of unique words in a sentence. 

**Token** on the other hand refers to the number of times a word occurs in a sentence.

**The Type-Token Ratio (TTR)**

The **Type-Token Ratio** refers to the ratio of number of different words(type) to the number of running words(tokens) in a given text or corpus.

This indicates on average how often a word occurs in a sentence. 

If the **TTR** is high, it indicates that new words are appearing quite often in the text, and if it is low then it indicates that same set of words are getting repeated over and over again. 

:exclamation: **High TTR** -> Tendency to use new words

:exclamation: **Low TTR** -> Tendency to repeat words repeatedly

:warning: Words that appear only once are called **```happax legomena```**.

## Zipf's Law

The ```Zipf's Law``` gives the relationship between the frequency of the word and its position in the list of its rank r.

In order to see the relationship, the following has to be done - 

1. Count the frequency of each word type in a corpus 

1. List the word types in decreasing order of their frequency

In other words we can say that - 

![Placeholder_1](https://github.com/AbhilashG97/WatermelonMochi/blob/master/Semester%206/Natural%20Language%20Processing/Theory%20and%20Notes/Lecture%20Notes%20and%20Slides/images/zipf_1.png)

which can also be written as - 

**```f.r = k```**

Therefore from the above expression we can conclude that the 50th most common word should occur 3 times the frequency of the 150th most common word. 

:warning: ```Zipf's Law``` can also be expressed in terms of probability. The ```Zipf's law``` can also be expressed as follows - 

![Placeholder_#](https://github.com/AbhilashG97/WatermelonMochi/blob/master/Semester%206/Natural%20Language%20Processing/Theory%20and%20Notes/Lecture%20Notes%20and%20Slides/images/zipf_%23.jpg)

If we replace the constant **k** with **```A.N```** where **A** is some constant and **N** is the total number of tokens in a corpus.  

On substituting **k** in the equation, we get the following - 

![Placeholder_2](https://github.com/AbhilashG97/WatermelonMochi/blob/master/Semester%206/Natural%20Language%20Processing/Theory%20and%20Notes/Lecture%20Notes%20and%20Slides/images/zipf_2.jpg)

### Zipf's other laws 

1. **Meaning of a word and its frequency**

    ```Zipf``` came up with an expression that relates the meaning of a word with its frequency. 

    The eqaution for the same can be found below - 

    ![Placeholder_3](https://github.com/AbhilashG97/WatermelonMochi/blob/master/Semester%206/Natural%20Language%20Processing/Theory%20and%20Notes/Lecture%20Notes%20and%20Slides/images/zipf_3.jpg)

    :warning: The above equation means that as the frequency of the number of words increases their meaning also increases.

    Also, on substituting the value of **```f```** in the above equation we get -

    ![Placeholder_4](https://github.com/AbhilashG97/WatermelonMochi/blob/master/Semester%206/Natural%20Language%20Processing/Theory%20and%20Notes/Lecture%20Notes%20and%20Slides/images/zipf_4.jpg)

    :exclamation: The above equation means that as the rank decreases the meaning of words increases. 

1.  **Word length and word frequency**

    Word frequency is inversely proportional to their length.   

1.  **Growth of the vocabulary with the size of the corpus**

    ![Placeholder_5](https://github.com/AbhilashG97/WatermelonMochi/blob/master/Semester%206/Natural%20Language%20Processing/Theory%20and%20Notes/Lecture%20Notes%20and%20Slides/images/zipf_5.jpg)

    where ```|V|``` is the size of the vocabulory and ```N``` is the number of tokens. 

    ```K``` is a constant whose value is between ```10 - 100```

    ```B``` is also a constant whose value is between ```0.4 - 0.6``` (roughly square root)

    :warning: Therefore, we can conclude that the size of a vocabulary grows with the squareroot of number of tokens.


# The Link Layer 

## Introduction to the Link Layer



## Error Detection and Corruption Techniques 

Here the data has to transferred from one node to another. In order to avoid data corruption ```Error Detection and Corruption Bits (EDC)``` is send to the other node along with the Data ```D```.

The other node receives the Data **D\`** and **EDC\`** which may or may not be equal to **D** and **EDC**. 

The receiver has to determine whether the Data D is corrupted or not. 

It is possible that the receiver might be able to detect the error in the data and send the data to the transport layer. Even with the use of the error-detection bits, errors may still be present. 

:warning: Since, errors might be undetected, such error detection mechanisms have to be selected which keeps the probabilty of errors to the minimum.

The following methiods are used to find errors in the transmitted bits - 

1.  **Parity**

    This is perhaps the simplest error detection technique where a ```parity bit``` is added to the ```data of d bits``` to detect bit errors.

    A parity bit can be added to make the data ```even-parity``` or ```odd-parity```. 

    In ```even-parity```, a bit is added such that the number of ```1's``` in a data of d bits is even. Whereas in case of ```odd-parity```, a bit is added such that the number of ```1's``` in the data is odd. 

    ```Sender``` adds the **parity-bit** and receiver checks the whether the number of 1's is odd or even depending on the type of parity used.

    ![](#)

    The single-bit parity has a major disadvantage that if even number of bits gets changed in an even-parity then it would be immpossible for the receiver to detect the error.

    Also, research has shown that errors are clustered together in bursts.

    In order to detect burst errors, two-dimensional bit parity scheme is used, where the data of d bits is coverted to a two dimensional array of i-rows and j-columns. The parity for each row and column is then calculated and appeneded to the 2D array. 

    If the error occurs now, the error would result in change of parity of the errored row and column. This can help in both identification and detection of bit errors. 

    ![](#)

    :boom: The ability of the receiver to both detect and correct bit errors is known as ```Forward Error Correction (FEC)```. ```FEC``` techniques can commonly used in Audio CDs.

1.  **Checksumming**

    The checksumming method is also quite simple and it involves treating the d bits present in the data as integers. In the Internet, this is exactly what is being done. Bytes of data are treated as 16-bit integers and it is then summed. 1's complement of the sum is taken which becomes the checksum that is passed to the receiver. 
    
    The receiver then sums all the received data along with the checksum. 1's complement of the data is taken and if the 1's complement does not contain all 1's, the data is declared as errored. 

    :warning: Checksumming is usually done at the transport-layer. 

    :boom: Better error detection mechanisms like ```CRC``` are implemented at the link-layer. 

    The reason why CRC is not implemented at the transport layer instead of checksumming is because of the speed factor. Checksumming is implemented on the host machine's software and since it is implemented in the software it needs to have simple and fast error detection scheme.

    ```CRC``` on the other hand is implemented on dedicated hardware at the link layer which can compute complex ```CRC``` operations quickly.  

1.  **CRC**

    CRC stands for ```Cyclic Redundancy Check```. 


## Multiple Access Links and Protocols


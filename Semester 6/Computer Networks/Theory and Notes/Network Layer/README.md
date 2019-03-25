
# Network Layer

## Introduction and Transport Layer Services 

> A transport-layer protocol provides for logical communication between application processes running on different host.

The application processes can be present in different parts of the world and the information that the two processes send to each other are sent through the transport layer which ensures that the data is reached to the other end.

:warning: The transport layer protocols are implemented in the end systems, but not in network routers.

:exclamation: The computers that are connected to a computer network are sometimes referred to as end systems or end stations. 

The transport layer converts the message it receives from the application layer into transport-layer packets known as **transport layer segements**.

:warning: The message conversion is done by breaking the message into smaller chunks and adding a transport layer header.

The message is then sent to the network layer. The message then travels to the target computer through the network layer. When the message is passed to the network layer, the transport-layer segement is encapsulated with the network layer packet - **datagram**. 

:warning: The routers can access information of the network-layer segement. The cannot access the transport-layer information encapsualated in the network-layer segment. 

When the information reaches the other end, the network-layer extracts the transport-layer segment from the datagram and passes the information to the transport layer which then processes the information. The transport layer then passes the information to the application process present in the application layer.

### Relationship Between Transport and Network Layers

:warning: Transport layer provides logical communication **between processes** running on different hosts. 

:warning: The network layer on the other hand provides logical communication **between hosts**.

The transport layer lies just above the network layer.

The services provided by the transport layer is constrained by the underlying network layer. 

:warning: If the underlying network layer is unable to provide certain services then the transport layer also won't be able provide those services.

:warning: However, there are certain services that the transport layer can provide even though when it is not being provided by the network layer. 

### Overview of the Transport Layer 

The Internet (also known as the TCP/IP network) allows the application layer to use to two distinct transport layer protocols which are - 

1. **UDP**
1. **TCP**

:warning: **UDP** provides an unreliable, connectionless service to the invoking application.

:warning: **TCP** provides a reliable, connection-oreinted service to the invoking application.

:exclamation: When designing a network application, a developer must choose either of these transport layer protocols.

:warning: **RFC** stands for ```Remote Function Call```.

:warning: The transport layer packets are referred to as **segments**.

:warning: Network layer packets are referred to as **datagram**.

:boom: Internet's network layer protocol is referred to as **Internet Protocol**, also known as **IP**.

As mentioned above, **IP** provides logical communication between hosts.

:warning: The **IP** service model is based on **best-effort delivery service** which means that **```IP```** will try its level best to deliver the segements but it cannot guarentee anything. 

**```IP```** doesn't gaurentee the following -

1. It doesn't gaurentee segment delivery.
1. It doesn't gaurentee orderly delivery of segments.
1. It doesn't gaurentee the integrity of the data in the segments.

Hence, **```IP```** is said to be an ```unreliable service```. 

:exclamation: Every host has atleast one network-layer address, a so-called IP address.

:warning: The most fundamental reponsiblity of ```UDP``` and ```TCP``` is to extend **```IP's```** delivery service between two end system to a delivery service between two processes running on the end-systems. 

:warning: Extending host-to-host delivery process to process-to-process delivery system is called **transport-layer multiplexing** and **demultiplexing**.

#### UDP vs TCP

Both ```UDP``` and ```TCP``` provide integrity checking by including error-detection fields in their segments' headers. 

1.  **UDP**

    It only provides two minimal services which are as follows - 

    1. Proces-to-process message delivery
    1. Error checking

    :warning: ```UDP``` like ```IP``` provides unreliable service (i.e. it does not gaurentee that data sent by one proces will arrive intact or at all to the destination process)

1.  **TCP**

    Unlike ```UDP```, ```TCP``` provides **reliable data transfer**. 

    ```TCP``` makes use of serveral techniques to ensure that the data being sent by the sending process is received by the receiving process, that too **correctly** and **in-order**. 

    ```TCP``` thus converts ```IP's``` unreliable service between end-systems to a reliable data transport service between processes. 

    ```TCP``` also provides ```congestion control```. Congestion control is not used by the application invoking the service, instead it is service for the Internet as a whole. 

    > TCP congestion control prevents any one TCP connection from swamping the links and routers between communicating hosts with an excessive amount of traffic. 

    > This is done by regulating the rate at which the sending sides of TCP connections can send traffic into the network. 

:warning: ```UDP``` unlike ```TCP``` is unregulated, which means that ```UDP``` can send data at any rate it pleases and that too for as long as it pleases.

## Multiplexing and Demultiplexing 

:warning: A ```multiplexing/demultiplexing``` system is needed by all computer networks.

At the receiving host, when a message arrives the transport layer receives the segements from the network-layer. The transport layer then has to send the message to the appropriate process present on the appropriate socket.

:warning: The transport layer however delivers the data to the intermediary socket. The receiving host can have many sockets. Each socket has a unique identifer and the format of the identifier depends upon whether the socket is a ```UDP socket``` or a ```TCP socket```.

When the transport-layer receives the segment, it reads the variuos fields present in the segment and then directs the message to the appropriate socket. 

:warning: The job of delivering the data in the transport-layer segment to the correct socket is called **demultiplexing**. 

:warning: The job of gathering data chunks from various sockets at the source host, encapsulating each data chunk with header information to create segements, passing the segments to the network layer is called **multiplexing**.

Transport-layer multiplexing requires the following - 

1. that sockets have unique identifiers. 
1. that each segment have special fields that indicate the socket to which the segment is to be delivered. These fields are the **source port number** and the **destination port number**.

Each port number is a 16-bit number, ranging from 0-65535. 

The port numbers ranging from 0-1023 are called **well-known port numbers** and are restricted, which means they are reserved for the use by well-known application protocols like ```HTTP(Port number 80)```, ```FTP(Port number 21)``` etc.

Here is how a demultiplexing service is implemented - 

Each socket in the host is assigned a port number, and when a segment arrives at the host, the transport layer examines the destination port number in the segment and directs the segment to the corresponding socket. 

The segment's data then passes through the socket into the attached process. This is how demultiplexing works in ```UDP```, however for TCP the process is a bit different.

## Connectionless Multiplexing and Demultiplexing 

:warning: Transport layer assigns a port in the range 1024 to 65535 that is currently not being used by any other ```UDP``` port in the host.

Typically, the client side of the application lets the transport layer automatically assign the port number, whereas the server side of the application assigns a specific port number.

To understand multiplexing and demultiplexing in a ```UDP``` network, let us consider two hosts A and B which have the 1025 and 1045 as their port number respectively. 

On the host side, the data from the port 1025 is taken by the transport layer and converted into a segment with approporiate information filled in the header. The segment is then taken up by the network layer which encapsulates the segment inside the network-layer datagram and makes a best-effort attempt to deliver the information to the host A. 

On the receiving side, if the data reaches host B, the transport layer examines the segment and delivers the data to correct socket depending upon the value present in the destination port. 

:warning: Please note that a ```UDP``` socket is fully identified by both the **IP address** and the **port number**.

:warning: The server uses the ```source port number``` to send an acknowledgment message back to the client. Hence, the source port number is also specified in the header of the transport-layer segment.

:warning: Here, if two ```UDP``` segments have different source ```IP``` addresses and/or source port number, but have the same destination ```IP``` address and destination port number, then the two segments will be directed to the same destination process via the same destinatoin socket.

## Connection-Oriented Multiplexing and Demultiplexing

:warning: A ```UDP``` is identified by a two-tuple, but the ```TCP``` on the other hand is identifed by a four-tuple. 

In case of a ```TCP``` network, the following are required - 

1. Source IP Address
1. Source Port Number 
1. Destination IP Address
1. Destination Port Number

The following occurs when a host sends a message to the receiver - 

1. The server initially waits for a clients on port number 1200.
1. The ```TCP``` client creates a socket and sends a connection-establishment-request.
1. The connection-establishment-request is a TCP Segment with destination port number 12000 and a special connection-establishment bit set in the ```TCP``` header.
1. When the host OS of the computer running the server process receives the incoming connection-request segment with the destination port 12000, it locates the server process that is waiting to accept a connection on port number 12000.
1. Then a socket is created.
1. The transport layer at the server notes the four-tuple values present in the transport-layer segment.
1. If the information present in the segment matches with the information of the process, then the data from the segment is passed on to the process through the socket.

:warning: All four fields of the ```TCP``` segment are used direct the segment to the appropriate socket.

:warning: If two ```TCP``` segments with different source ```IP``` address and ```port number``` but with the same destination ```IP``` address and ```port number``` are sent to a host, it will be directed to two different sockets unlike with what happens in ```UDP```.

## Web Servers and TCP

> If the client and server are using persistent HTTP, then throughout the duration of the persistent connection the client and server exchange HTTP messages via the same server socket. 

> However, if the client and server use non-persistent ```HTTP```, then a new ```TCP``` connection is created and closed for every request/response, and hence a new socket is created and later closed for every request/response. 

:warning: This frequent opening and closing of sockets can severely impact the performance of a busy Web server.

## Connectionless Transport: UDP

**```UDP```** is said to be **connectionless** because there is no hand-shaking between sendng and receiving transport-layer entities before sending a segment. 

```UDP``` is a ```vacuous transport protocol```.

```UDP``` does very little to extend the network layer, it only adds multiplexing/demultiplexing and some error checking to ```IP```.

:warning: ```UDP``` is almost directly talking with ```IP```. 

Tht following steps takes place when ```UDP``` is used -

1. It takes messages from the application process and attaches ```source port number``` and ```destination port number``` for multiplexing/demultiplexing service.
1. It adds two small fields to the segment and passes the resulting segment to the network layer.
1. The network layer encapsulates the segment into an ```IP datagram``` and makes a best-effort attempt to deliver the segment to the receiving host. 
1. If the segment arrives at the host, ```UDP``` uses the destination port number to deliver the segment's data to the application process.

## Working of DNS with UDP

```DNS``` is an application-layer protocol that uses ```UDP```. 

The following steps takes place when ```DNS``` uses ```UDP``` - 

1. When the ```DNS``` application in a host wants to make a query, it constructs a DNS query message and passes the message to the ```UDP```.
1. The host-side ```UDP``` adds header information to the data sends the segment to the network layer without performing any hadshaking. 
1. The network layer then encapsulates the data into an ```IP``` datagram and makes it best-effort attempt to send the query to the name server. 
1. If the query is received by the name server, the segement is given to the transport layer which demultiplexes it and hands the data over to the application process. 
1. The ```DNS``` application at the querying host then waits for a reply from the name server. If it is unable to get the reply (either due to the query or the reply getting lost), then the ```DNS``` host application will query send the query to anther name server or it informs the invoking application that it can't reply. 

## Preference of UDP over TCP

Below mentioned are the reasons why ```UDP``` is preferred over ```TCP``` - 

1.  **Finer application-level control over what data is sent and when** 

    Under ```UDP``` as soon as the data is being passed from the application process, the ```UDP``` adds a few header files to the segment and then sends the segment to the network layer. 

    ```TCP``` on the other hand has a congestion control mechanism which throttles the transport-layer TCP sender when one or more links between the source and destination port becomes excessively congested. 

    ```TCP``` will also continue to resend a segment until the destination process acknowledges the delivery of the segment regardless of how long reliable delivery takes. 

    Thus, for applications that require data to be transmitted quickly, ```TCP``` will be a bad choice. The application developer can use ```UDP``` and extra features to it, depending upon the requirement. 

1.  **No connection establishment**

    In ```UDP``` there is no preliminary handshaking unlike ```TCP``` which performs a three-way handshaking before sending the data. 


    Because of the three-way handshaking, ```TCP``` is slower compared to ```UDP```. Thus, ```DNS``` makes use of ```UDP``` and not ```TCP```. 

    However, ```HTTP``` makes use ```TCP``` and not ```UDP``` because reliability for web pages is crucially important. Since, ```HTTP``` uses ```TCP``` it takes some time to load webpages in the web-browser.

1. **No connection state**

    ```TCP``` maintains connection state in the end systems. This connection state includes receive and send buffers, congestion control parameters, sequence and acknowledgement number parameters etc. 

    ```TCP``` needs to maintain these parameters because it provides reliable service and congestion control.

    ```UDP``` on the other hand does not maintain any such connection pararmeters. 

    Hence an application that supports ```UDP``` can run many more clients when compared to ```TCP```. 

1.  **Small packet header overhead**

    ```TCP``` segment has over 20 bytes of header overhead whereas in case of ```UDP``` the header overhead is only of 8 bytes. 


Below mentioned are the cases where ```UDP``` is used - 

1. RIP 
1. Used to carry network managment data (SNMP)
1. DNS

:warning: ```UDP``` unlike ```TCP``` has no congestion-control mechanism which if not controlled can lead to a lot of packet overflow at the routers which in turn would result in high loss rates between a ```UDP``` sender and receiver.

:boom: It is possible to achieve reliable data transfer in ```UDP```. But it has to be built into the application itself. 

### UDP Segment Structure

The application data is stored in the data field of the ```UDP``` segment. 

The ```UDP``` header has only 4 fields. The first two fields are for the ````source port number``` and the ```destination port number```. The next two fields are for length and checksum. 

:boom:The length specifies the number of bytes of the ```UDP``` segment(header + data). 

:exclamation: an explicit length value is needed as the data field may vary from one segment to another. 

:warning: The size of the header field in the ```UDP``` segment is fixed and it is of 8 bytes. 

:boom: The checksum is used by the receiving host to check for errors in the segment. 

:exclamation: The checksum is also calculated in the ```IP``` header.

### UDP Checksum

The checksum is used for error detection. It is used to determine if the bits in the segment have been altered or not as it moved from source to destination. 

:warning: Although ```UDP``` provides error-checking, it does no do anything to recover from an error. 

:boom: Some implementations send the data to the application process with a warning, others simply discard the data. 

Below mentioned are the steps that are used in error checking - 

1.  Sum all the 16-bit numbers.
    
    :warning: If there is an overflow, wrap the extra bit.

1.  Perform ones compliment to the resulting sum. The resulting sum is the checksum that is added to the checksum field in the segment. 

1.  On the receiving side, all the 16-bit values are summed with checksum. If the resulting value is **all ones**, then no errors are present in the segment. 

Below mmentioned are the reasons error checking is being provided by ```UDP``` - 

1. Even when the segments are safely, there is no gaurentee that the bits will be stored in the routers properly. Errors might be introduced to the segment when the segment is stored in the router. 

1. Also, there is no gaurentee that all links provided by the link-layer protocols provide error checking. 


:warning: Hence, ```UDP``` must provide end-to-end error checking. 

## Principles of Reliable Data Transfer

The following needs to be provided by a **Reliable Data Transfer Protocol** -

1. No transferred bits are corrupted, i.e no bits in the segment are flipped from 1 to 0 or vice-versa. 
1. No transferred data is lost.
1. All the transferred data is delivered in the order in which they are sent.

:warning: It is the task of a **Reliable Data Transfer Protocol** to implement this service abstraction.

:boom: The task of implementing a **Reliable Data Transfer Protocol** is made difficult by the fact that the underlying protocol could be unreliable.

:exclamation: While providing an implementation for the **Reliable Data Transfer Protocol (RDT)** we'll assume that the data will not reordered when it is being transferred, however the data can get lost or get corrupted. 

:warning: Also, only unidirectional data transfer will be considered for now. 

### Building a Reliable Data Tranfer Protocol 

Reliable Data Transfer Protocol is often abbreviated as ```RDT```. Below mentioned are the various ways in which it can be implemented.  

#### RDT over a Perfectly Reliable Channel


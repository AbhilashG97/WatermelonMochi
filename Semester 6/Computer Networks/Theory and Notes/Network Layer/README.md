
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
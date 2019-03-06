# Socket Programming TCP/IP in C

Plase view [this](http://www.cs.rpi.edu/~moorthy/Courses/os98/Pgms/socket.html) site.

## Basics

The steps involved in establishing a socket on the client side are as follows:

    Create a socket with the socket() system call
    Connect the socket to the address of the server using the connect() system call
    Send and receive data. There are a number of ways to do this, but the simplest is to use the read() and write() system calls. 

The steps involved in establishing a socket on the server side are as follows:

    Create a socket with the socket() system call
    Bind the socket to an address using the bind() system call. For a server socket on the Internet, an address consists of a port number on the host machine.
    Listen for connections with the listen() system call
    Accept a connection with the accept() system call. This call typically blocks until a client connects with the server.
    Send and receive data 

When a socket is created, the program has to specify the **address domain** and the **socket type**. 

:warning: Two processes can communicate with each other only if their sockets are of the same type and in the same domain.

There are two widely used address domain -

1. Internet domain
1. UNIX domain

There are two widely used socket types - 

1. stream sockets
1. datagram sockets
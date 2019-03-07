# Socket Programming TCP/IP in C

Plase view [this](http://www.cs.rpi.edu/~moorthy/Courses/os98/Pgms/socket.html) site for more information.

## Basics

The steps involved in establishing a socket on the client side are as follows:

1. Create a socket with the ```socket()``` system call.
1. Connect the socket to the address of the server using the ```connect()``` system call.
1. Send and receive data. There are a number of ways to do this, but the simplest is to use the ```read()``` and ```write()``` system calls. 

The steps involved in establishing a socket on the server side are as follows:

1. Create a socket with the ```socket()``` system call.
1. Bind the socket to an address using the ```bind()``` system call. For a server socket on the Internet, an address consists of a port number on the host machine.
1. Listen for connections with the ```listen()``` system call.
1. Accept a connection with the ```accept()``` system call. This call typically blocks until a client connects with the server.
1. Send and receive data.

When a socket is created, the program has to specify the **address domain** and the **socket type**. 

:warning: Two processes can communicate with each other only if their **sockets are of the same type and in the same domain**.

There are two widely used address domain -

1. Internet domain
1. UNIX domain

There are two widely used socket types - 

1. stream sockets
1. datagram sockets

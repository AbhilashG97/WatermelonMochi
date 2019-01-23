 \
 
 # Labsheet 1

## Popular Network Commands

1.  **arp**

    Displays and modifies the IP-to-Physical address translation tables used by **Address Resolution Protocol** (ARP).

    Here, is an example for the arp command - 

    ```arp -a```

    ```arp -a 192.168.168.22```

    This command displays the internet address and the physical address(MAC Address). 
    The ```arp``` command allows you to display and modify the **Address Resolution Protocol (ARP)** cache. An ARP cache is a simple mapping of IP addresses to MAC addresses.
    Each time a computer’s TCP/IP stack uses ARP to determine the Media Access Control (MAC) address for an IP address, it records the mapping in the ARP cache so that future ARP lookups go faster

1.  **ipconfig**

    This command displays the Windows IP Configuration. 

    Here is an exmaple of the command. 

    ```ipconfig```

    This command displays various information like IPV4 address, Subnet Mask, Default Gateway etc. 

    :warning: If your IP address is 192.168.x.x, 10.x.x.x, or 172.16.x.x, then you are receiving an internal IP address from a router or other device. The IP address that the world sees is that of the router. If you are receiving a 169.254.x.x address, this is a Windows address that generally means your network connection is not working properly.

    Also, we can use this command to get detailed information about the IP configuration 

    ```ipconfig /all```

    A few other commands - 

    ```ipconfig /release```

    ```ipconfig /renew```

1.  **traceroute**

    Traceroute is a command which can show you the path a packet of information takes from your computer to one you specify. It will list all the routers it passes through until it reaches its destination, or fails to and is discarded. In addition to this, it will tell you how long each 'hop' from router to router takes.

    This is how we can use this command - 

    ```tracert google.com```

    or 

    ```tracert baidu.com```

1.  **ping**

    The ping command is used to test the ability of the source computer to reach a specified destination computer. The ping command is usually used as a simple way to verify that a computer can communicate over the network with another computer or network device.

    The ping command operates by sending **Internet Control Message Protocol (ICMP)** Echo Request messages to the destination computer and waiting for a response. How many of those responses are returned, and how long it takes for them to return, are the two major pieces of information that the ping command provides.

    This command can be used in the following way - 

    ```ping google.com```

    We can also use various flags along with the ping command. like ```-t```, ```-a```.

1.  **route**

    This command displays the routing table for a machine. We can use different arguments with this command such as ```-4```, ```-6```.

    ```-4``` shows the routing table for IPv4.
    ```-6``` shows the routing table for IPv6.

## TCP/IP information for your computer 

    IPv4 Address. . . . . . . . . . . : 10.113.4.54
    Subnet Mask . . . . . . . . . . . : 255.255.0.0
    Default Gateway . . . . . . . . . : 10.113.0.1

## Additional TCP/IP configuration information 

    MAC Address: 94-39-E5-24-15-36
    NIC (Network Interface Controller): Broadcom 4313GN 802.11b/g/n 1x1 Wi-Fi Adapter   

    Hostname : DESKTOP-N9PS2D7

    DHCP Server . . . . . . . . . . . : 192.168.0.251
    DNS Servers . . . . . . . . . . . : 192.168.0.250

**Do all of the servers and workstations share the same network portion of the IP address as the
student workstation?**

Yes, provided all of the machines are on the same network.

## Part 2

```nslookup```

It is a command that allows a user to enter a host name and find out the corresponding IP address. This comamnd can also do reverse name lookup and find the host name for an IP address you specify.

### Tasks 

1.  What is a Loopback Address?

A loopback address is a type of IP address that is used to test the communication or transportation medium on a local network card and/or for testing network applications. Data packets sent on a loopback address are re-routed back to the orginating node without any alteration or modification.

1. Difference between IP address and default gateway

The **default gateway** is a pathway where an IPv4/IPv6 address that is assign to a router. The function of a default gateway is to route packets out to the Internet (WAN) where other web servers/services are.

IP address is used to identity a device so that routers would know where packets should be sent, to the source IP address that originally made a request packet to an intended server from the Internet.

1. Difference between TCP and UDP 

Both TCP and UDP are protocols used for sending bits of data — known as packets — over the Internet.

    1.  **TCP**
        TCP stands for Transmission Control Protocol. It is the most commonly used protocol on the Internet.

        TCP is all about this reliability — packets sent with TCP are tracked so no data is lost or corrupted in transit. There is constant communication between the sender and the receiver when the exchange of packects take place. This ensures that the packets are not lost. Packets are also checked for errors.

    2. **UDP**

        UDP stands for User Datagram Protocol — a datagram is the same thing as a packet of information.

        The UDP protocol works similarly to TCP, but it throws all the error-checking stuff out. All the back-and-forth communication and deliverability guarantees slow things down. 

        When using UDP, packets are just sent to the recipient. The sender will not wait to make sure the recipient received the packet — it will just continue sending the next packets.

1. Difference between DHCP and DNS server

| ASIS FOR COMPARISON | DNS                                                                                                  | DHCP                                                                                                    |
|---------------------|------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------|
| Basic               | It is an address resolving mechanism.                                                                | It is a protocol used for assigning IP's to the host in a local area network statically or dynamically. |
| Port number used    | 53                                                                                                   | 67 and 68                                                                                               |
| Related protocols   | UDP and TCP                                                                                          | UDP                                                                                                     |
| Server              | DNS server translates the Domain name to the IP and vice-versa.                                      | DHCP server configures the hosts automatically.                                                         |
| Working methodology | Decentralized                                                                                        | Centralized                                                                                             |
| Advantage           | Eliminate the need to remember the IP address; instead, the domain name is used for the web address. | Reliable IP address configuration and reduced network administration                                    |

1. Difference between ping and traceroute 

The main difference between ```Ping```and ```Traceroute``` is that Ping is a quick and easy utility to tell if the specified server is reachable and how long will it take to send and receive data from the server whereas Traceroute finds the exact route taken to reach the server and time taken by each step (hop).

1.  Difference between arp and dns

    DNS (Domain Name System) server translates domain names to IP addresses so browsers can load Internet resources. The arp tool on the other hand lists all the ip address and MAC addresses.

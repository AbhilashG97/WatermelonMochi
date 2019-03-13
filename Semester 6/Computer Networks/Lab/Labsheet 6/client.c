#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>

int main() 
{
	int sockfd;
	struct sockaddr_in serv_addr;

	//bzero() sets all values in a buffer to zero
	bzero ((char*)&serv_addr, sizeof(serv_addr));

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");	
	
	// htons - host-to-network short
	serv_addr.sin_port = htons(2345);

	sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

	char data[100] = {0};
	read (sockfd, data, 3);
	printf("%s\n", data);

	write(sockfd, "watermelon", 5);
	
	close(sockfd);
	exit(0);
	return 0;
}
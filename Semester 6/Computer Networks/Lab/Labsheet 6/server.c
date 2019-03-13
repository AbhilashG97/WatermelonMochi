#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){

	struct sockaddr_in serv_addr, client_addr;

	int sockfd, newsockfd, clientlen = sizeof(client_addr), childpid;
	char msg[100] = {0};

	sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	bzero((char*)&serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serv_addr.sin_port = htons(2345);

	// attach a local address to a socket
	bind(sockfd, (struct sockaddr_in*)&serv_addr, sizeof(serv_addr));


	// announce willingness to accept connections
	listen(sockfd, 5);

	for(;;) 
	{
		clientlen = sizeof(client_addr);

		// block a caller until a connection request arrives
		newsockfd = accept(sockfd, (struct sockaddr*)&client_addr, &clientlen);

		if((childpid = fork()) == 0) 
		{	
			close(sockfd); // release the connection
			read(newsockfd, msg, 5);

			write(newsockfd, strupr(msg), 4);
			printf("%s\n", msg);
			exit(0);
		}
		close(newsockfd);
	}
	return 0;
}
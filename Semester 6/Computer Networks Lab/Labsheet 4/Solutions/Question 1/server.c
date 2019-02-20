#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <ctype.h>

int main()
{

	struct sockaddr_in server;
	struct sockaddr_in client;
	unsigned int sockfd, clientlen;
	char rmsg[100], smsg[] = "Server says: Hello\n";

	sockfd = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	bzero ((char*) &server, sizeof (server));
	server.sin_family = AF_INET;
	inet_aton ("127.0.0.1", &server.sin_addr);
	server.sin_port = htons (3000);

	bind (sockfd, (struct sockaddr*)&server, sizeof (server));

	recvfrom (sockfd, rmsg, 100, 0, (struct sockaddr*)&client, &clientlen);
	
 	for(int i=0; i < strlen(rmsg); i++) {
 		if(islower(rmsg[i])) {
 			rmsg[i] = toupper(rmsg[i]); 
 		}
 	}

 	printf("%s\n", rmsg);

	sendto (sockfd, rmsg, 100, 0, (struct sockaddr*)&client, clientlen);
	return 1;

}
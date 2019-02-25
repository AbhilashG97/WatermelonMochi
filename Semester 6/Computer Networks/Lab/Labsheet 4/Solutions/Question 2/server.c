#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>

char[] get_required_string(char[] input) 
{

	for(int i=0; i<strlen(input); i++) {
		
	}

}

int main()
{
	struct sockaddr_in server;
	struct sockaddr_in client;
	unsigned int sockfd, clientlen;
	char rmsg[100], smsg[100] = "";

	sockfd = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	bzero ((char*) &server, sizeof (server));
	server.sin_family = AF_INET;
	inet_aton ("127.0.0.1", &server.sin_addr);
	server.sin_port = htons (3000);

	bind (sockfd, (struct sockaddr*)&server, sizeof (server));

	recvfrom (sockfd, rmsg, 3, 0, (struct sockaddr*)&client, &clientlen);
	printf ("%s", rmsg);

	smsg = get_required_string(rmsg);

	sendto (sockfd, smsg, 6, 0, (struct sockaddr*)&client, clientlen);
	return 1;
}
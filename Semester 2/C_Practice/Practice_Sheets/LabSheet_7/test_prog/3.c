#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char message[100];
	gets(message);
	int diff=abs(message[0]-message[strlen(message)-1]);
	for(int i=0;i<strlen(message);i++){
		message[i]+=diff;

	}
	puts(message);
	return 0;
}

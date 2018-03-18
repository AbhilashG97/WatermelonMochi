#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char s[100];
	gets(s);
	for(i=0;i+1<strlen(s);i++){
		printf("%c ",s[i]);
		if(s[i]!=s[i+1]-1)
			printf("\n");
	}
	printf("%c \n",s[strlen(s)-1]);
	return 0;
}

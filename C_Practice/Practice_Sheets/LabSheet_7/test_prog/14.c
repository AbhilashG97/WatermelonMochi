#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int w=1;
	gets(s);
	for(int i=0;i<strlen(s);i++ ){
		if(s[i]==' ')
			w++;
	}
	printf("%d",w);
	return 0;

}
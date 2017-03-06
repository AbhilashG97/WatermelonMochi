    #include<stdio.h>
    #include<string.h>
    
    int main() {
    	char s1[50], s2[30];
    	printf("\nEnter String 1 :");
    	gets(s1);
    	printf("\nEnter String 2 :");
    	gets(s2);
        int i, j;
    	i = strlen(s1);
        strcat(s1, s2);
    	printf("\nConcated string is :%s\n", s1);
    	return (0);
    }
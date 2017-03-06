#include<stdio.h>

void main()
{
int i = 0;
char name[20]; 

printf("\nEnter a string : "); 

while((name[i] = getchar())!='\n')
        i++ ;

}
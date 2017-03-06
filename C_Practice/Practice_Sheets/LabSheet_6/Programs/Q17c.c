#include <stdio.h>

void main()
{
int i = 0;
char str[20]; 

printf("\nEnter a string : "); 

while((str[i] = getchar())!='\n')
        i++ ;

printf("You entered : %s", str);

}
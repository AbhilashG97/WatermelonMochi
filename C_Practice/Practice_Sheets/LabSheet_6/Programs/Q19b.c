# include <stdio.h> 
# include <string.h>

void main() 
{
    char str[50];
    int i =0;
    printf("Enter a string.\n");
    gets(str);

    i = strlen(str);

    printf("%d\n", i);

}
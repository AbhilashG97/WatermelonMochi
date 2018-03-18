# include <stdio.h> 
# include <string.h>

void main() 
{
    char str[50];
    int i =0;
    printf("Enter a string.\n");
    gets(str);

    for (i=0; str[i] != '\0'; i++);

    printf("%d\n", i);

}
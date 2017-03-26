#include <stdio.h>
#include <string.h>
# include <ctype.h>
void main()
 {
    int i=0,j=0,l, k=0;
    char str[200];
    printf("Enter a string.\n");
    while((str[i]=getchar()) != '\n')
    {
        i++;
    }
    l = strlen(str);
    for (int j=0; j<l; j++ ) 
    {
        str[j] = toupper(str[j]);
    }

    while ((putchar(str[k]))!= '\n') 
    {
        k++;
    }
}
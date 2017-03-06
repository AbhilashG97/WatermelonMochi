#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[255];
    printf("Enter a string: "); fgets(str,255, stdin);
    printf("Here is your original string: %s\n", str);

    int j;
    for(j = 0; str[j]; j++)
    {
        str[j] = toupper(str[j]);
    }
    printf("Here is a uppercase version of your string: %s\n", str);    
    return 0;
}
# include <stdio.h>

int main () 
{
    char str = "Hello";
    printf("\n %s" ,str);
    printf("\n %s" ,&str);
    printf("\n%s",&str[2]);

    return 0;
}
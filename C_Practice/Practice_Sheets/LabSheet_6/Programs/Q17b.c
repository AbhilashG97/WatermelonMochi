# include <stdio.h> 

int main() 
{
    char str[50];
    printf("Enter a string.\n");
    gets(str); 
    printf("You entered :\n");
    printf("%s\n", str);
    return 0;
}
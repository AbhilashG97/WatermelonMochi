# include <stdio.h>

int main () 
{
    char input;
    printf("Enter any character.\n");
    scanf("%c", &input);

    if (input>=65 && input<=90) 
    {
        printf("You entered a upper case character %c.\n", input);
    } else if (input <=122 && input>=97) 
    {
        printf("You entered a lower case character %c.\n", input);
    } else if (input <=57 && input >= 48) 
    {
        printf("You entered a digit between 0-9 %c.\n", input);
    } else {printf("You entered a special symbol character %c.\n", input);}

    return 0;
}

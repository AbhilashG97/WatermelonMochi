# include <stdio.h>

int main() 
{
    char ip;
    printf("Enter a character.\n");
    scanf("%c", &ip);

    int con1 = (ip>=65  && ip<=90)?1:(ip>=97 && ip<=122)?2:(ip>=48 && ip<=57)?3:0;

    switch(con1) 
    {
        case 1 : printf("You entered a upper case character.\n");
                break;
        case 2 : printf("You entered a lower case character.\n");
                break;
        case 3 : printf("You entered a digit.\n");
                break;      
        default : printf("You entered a special case character.\n");
    }

    return 0;
}
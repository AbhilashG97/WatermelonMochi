# include <stdio.h> 

int main() 
{
    int a;
    printf("Enter a number.\n");
    scanf("%dd", &a);

    switch (a%2==0) 
    {
        case 1 : 
                printf("Even.\n");
                break;
        case 0 :
                printf("Odd.\n");
                break;               
    }

    return 0;
}
# include <stdio.h>

int main () 
{
    for (int i =0; i<=5; i++) 
    {   
        printf("\n");
        for (int j = 1; j<=i; j++) 
        {
            printf("%d",j);
        }
    }

    printf("\n");

    return 0;
}
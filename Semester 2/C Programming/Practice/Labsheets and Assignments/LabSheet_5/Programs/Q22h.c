# include <stdio.h>

int main () 
{
    for (int i =1; i<=5; i++) 
    {
        for (int k =1; k<=i; k++) 
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
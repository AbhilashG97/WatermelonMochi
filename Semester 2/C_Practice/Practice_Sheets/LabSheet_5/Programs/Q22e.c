# include <stdio.h>

int main () 
{   
    int j =1;
    for (int i =1; i <=5; i++) 
    {   
        printf("$");

        for (int k =1; k <= 5; k++) 
        {
            if (k=i) 
            {
                printf("$");

            } else {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
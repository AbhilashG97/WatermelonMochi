# include <stdio.h> 

int main () 
{ 
    for (int i =1; i <= 5; i++) 
    {   
        int j =1;
        for (j; j<=i; j++) 
        {
            printf("%d", j);
        }

        for (j = i-1; j>0; j--) 
        {
            printf("%d", j);
        }
            printf("\n");
    }

    return 0;
}
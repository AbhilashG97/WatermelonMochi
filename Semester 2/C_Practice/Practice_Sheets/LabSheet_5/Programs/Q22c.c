# include <stdio.h> 

int main () 
{   
    char val = 'A';

    for (int i =0; i < 5; i++) 
    {   
        val = 'A';
        printf("\n");

        for (int j=0; j<=i; j++) 
        {
            printf("%c",val);
            val = val + 1;
        }
    }

    printf("\n");
    return 0;

}
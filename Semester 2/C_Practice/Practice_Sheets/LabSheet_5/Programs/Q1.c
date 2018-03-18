# include <stdio.h>

int main() 
{   
    int i = 1;
    while (i<=25) 
    {
        if (i%2==0) 
        {
            printf("%d ", i);
        }

        i++;
    }
    printf("\n");
    return 0;
}
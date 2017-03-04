# include <stdio.h>

int main () 
{
    long limit, prod = 2;
    printf("Enter a limit.\n");
    scanf("%ld", &limit);
    printf("2 ");

    for (int i = 1 ; prod <= limit; i++) 
    {
        prod = prod*prod;
        if (prod > limit) 
        {
            break;
        }
        printf("%ld ", prod);
        
    }

    return 0;
}
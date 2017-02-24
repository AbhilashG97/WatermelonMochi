# include <stdio.h> 

int main () 
{
    int i = 1, n, prod;
    printf("Enter a number.\n");
    scanf("%d", &n);
    printf("\n");
    
    for (i; i <=10 ; i++) 
    {   
        prod = i*n; 
        printf("%d x %d = %d\n", n, i, prod);
    }

    printf("\n");
    return 0;
} 
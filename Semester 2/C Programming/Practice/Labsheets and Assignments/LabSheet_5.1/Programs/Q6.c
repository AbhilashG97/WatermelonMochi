# include <stdio.h>

int main() 
{
    int m;
    printf("Enter a number.\n");
    scanf("%d", &m);

    for (int i=m; i>=1; i--) 
    {   
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
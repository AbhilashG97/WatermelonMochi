# include <stdio.h> 

int main () 
{
    int i = 1, n;
    printf("Enter the limit.\n");
    scanf("%d", &n);

    for (i; i <=n ; i++) 
    {
        if(i%2!=0) 
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
} 
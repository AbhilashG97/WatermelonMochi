# include <stdio.h>

int main() 
{
    int m;
    printf("Enter a limit.\n");
    scanf("%d", &m);

    for (int i=1; i<=m; i++) 
    {   
        if(i%2!=0) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
# include <stdio.h>

int main () 
{
    int sum = 0, i = 1, n;
    printf("Enter the limit.\n");
    scanf("%d", &n);

    for(i; i<=n; i++) 
    {
        sum = sum + i;
    }

    printf("The sum of the n natural numbers is %d\n", sum);
    return 0;
}
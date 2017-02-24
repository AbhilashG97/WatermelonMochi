# include <stdio.h>

int main () 
{
    int sum = 0, i = 1, n;
    printf("Enter the limit.\n");
    scanf("%d", &n);

    while (i<=n) 
    {
        sum = sum + i;
        i++;
    }

    printf("The sum of the n natural numbers is %d\n", sum);
    return 0;
}
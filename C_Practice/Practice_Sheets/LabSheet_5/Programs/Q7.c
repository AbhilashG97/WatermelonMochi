# include <stdio.h> 

int main () 
{
    int p=1, n;
    printf("Enter a number.\n");
    scanf("%d", &n);

    for (int i=1; i <=n ; i++) 
    {
       p = p * i;
    }

    printf("Factorial of the enterd number is %d\n",p);
    return 0;
} 
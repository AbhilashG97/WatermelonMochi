# include <stdio.h> 

int main () 
{
    int a, b, c, d;
    printf("Enter four numbers.\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);

    if (a>b && a>c && a>d) 
    {
        printf("%d is the largest.\n", a);
    } else if (b>c && b>d) 
    {
        printf("%d is the largest.\n",b);
    } else if (c > d) 
    {
        printf("%d is the largest.\n", c);
    } else {printf("%d is the largest.\n", d);}

    return 0;
}
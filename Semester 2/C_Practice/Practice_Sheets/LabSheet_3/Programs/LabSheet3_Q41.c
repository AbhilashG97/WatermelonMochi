# include <stdio.h>

int main () 
{
    long a, b, c, f;
    printf("Enter three numbers.\n");
    scanf("%ld%ld%ld", &a, &b, &c);
    f = (a+b+c)/3;
    float avgf = (float) f;

    printf("\n\nThe average of the three numbers in float is %f.\n", avgf);

    return 0;
}
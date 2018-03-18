# include <stdio.h>

int main() 
{
    char a, b, temp;
    printf("Enter characters values for variables a and b.\n");
    scanf("%c\n%c", &a,&b);

    temp = a;
    a = b ;
    b = temp;

    printf("\n\n%c\n%c\n", a,b);

    return 0;
}
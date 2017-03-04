#include<stdio.h>
 
int main()
{
    int n=5, c, k, space;
    space = n;
 
    for ( k = 1 ; k <= n ; k++ )
    {   // spacing factor
        for ( c = 1 ; c < space ; c++ )
            printf(" ");
 
        space--; 
        for( c = 1 ; c <= k ; c++ )
            printf("%d",c);

        printf("\n");
    }
 
    return 0;
}
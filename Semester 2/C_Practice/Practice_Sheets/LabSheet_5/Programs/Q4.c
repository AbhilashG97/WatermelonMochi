# include <stdio.h> 

int main () 
{
    int i = 1, sqr, cu, n;
    printf("Enter the limit.\n");
    scanf("%d", &n);
    printf("Squares of the first n natural numbers are \n");
    do 
    {
        sqr = i*i; 
        printf("%d ", sqr);
        i++;
        
    } while (i<=n);

    i = 1;
    printf("\nCubes of the first n natural numbers are \n");

    do 
    {
        cu = i*i*i; 
        printf("%d ", cu);
        i++;   
    } while (i<=n);

    printf("\n");
    return 0;
}
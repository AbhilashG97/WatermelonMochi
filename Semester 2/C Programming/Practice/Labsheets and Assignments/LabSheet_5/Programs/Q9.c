# include <stdio.h>

int main () 
{
    printf("Leap years between 1900 and 2100 are : \n");

    for (int i=1900; i <=2100; i++ ) 
    {
        if (((i % 4 == 0) && (i % 100!= 0)) || (i%400 == 0))
            {
                printf("%d ", i);
            }
    }
    printf("\n");
    return 0;
}
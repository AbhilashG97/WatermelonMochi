# include <stdio.h> 

int main() 
{   int a = 1;
    for (int i =1; i <=5; i++) 
    {   a = a + 2;
        for (int k=1; k <= i; k++) 
        {
            printf("%d", a%2);
            a = (a % 2) + 1;
        }
        
        printf("\n");
        
    }

    return 0;
}


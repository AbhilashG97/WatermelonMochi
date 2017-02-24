# include <stdio.h>

int main() 
{
    int a, b, c, total, smallest, largest, num;
    float average;
    printf("Enter three numbers.\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n----------------------------------------------------------------------------\n");
    while (1) 
    {
        printf("\n1. Calculate total.\n2. Calculate average.\n3. Display the smallest.\n4. Display the largest value.\n5. Exit\n");
        scanf("%d", &num);
        printf("\n");
        switch(num) 
        {
            case 1 :total = a + b + c; 
                    printf("The total of three numbers entered is %d\n", total);
                    continue;

            case 2 :average = (float) (a + b + c)/3;
                    printf("The average of the three numbers enterd is %f\n", average);
                    continue;

            case 3 :(a<b&&a<c)?(smallest = a):(b<c)?(smallest = b):(smallest = c);
                    printf("The smallest of the three numbers is %d\n", smallest);
                    continue;

            case 4 :(a>b&&a>c)?(largest = a):(b>c)?(largest = b):(largest = c);
                    printf("The largest of the three numbers is %d\n", largest);
                    continue; 

            case 5 : goto exit;

            default : printf("Please enter a valid option.\n");
                      continue;                                 
        }

        exit : break;
    }

    return 0;
}
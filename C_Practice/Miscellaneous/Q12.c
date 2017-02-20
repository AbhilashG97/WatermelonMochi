# include <stdio.h>

int main() 
{
    int num, rem, count = 0, arr[100], b[100], m;
    printf("Enter a number.\n");
    scanf("%d", &num);

    for (int i=1; num > 0; i++) 
    {
        rem = num % 10;
        arr[i-1] = rem;
        num = num/10;
        
        count = count + 1;
    }

    for (int k = 0; m = count;  k++ ) 
    {
        b[k] = arr[m];
    }

    for (int j = 0; j < count ; j++) 
    {

        switch(arr[j]) {
            case 1 : printf("one ");
                     break;
            case 2 : printf("two ");
                     break;
            case 3 : printf("three ");
                     break;
            case 4 : printf("four ");
                     break;
            case 5 : printf("five ");
                     break;
            case 6 : printf("six ");
                     break;
            case 7 : printf("seven ");
                     break;
            case 8 : printf("eight ");
                     break;
            case 9 : printf("nine ");
                     break;  
            default : printf("zero ");                                                                               
        }
    }

    return 0;

}
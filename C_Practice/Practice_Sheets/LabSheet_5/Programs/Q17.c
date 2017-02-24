# include <stdio.h>

int main () 
{
    int num, count = 0, c, arr[100], b[100], rem;
    printf("Enter a number.\n");
    scanf("%d", &num);

    for (int i = 0; num > 0; i++) 
    {
        rem = num % 10;
        arr[i] = rem;
        num = num / 10;
        count = count + 1;
    }

    c = count;

    for (int k = 0; k < count ; k++) 
    {
        b[k] = arr[c-1];
        c--;
        switch(b[k]) 
        {
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
            default: printf("zero ");                                                                                
        }   
    }
    printf("\n");
    return 0;
}

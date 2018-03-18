# include <stdio.h>

int main () 
{
    int num, bin, hex, oct, quo, num1, num2, num3, opt;
    printf("Enter a number.\n");
    scanf("%d", &num);

    num1 = num;
    num2 = num;
    num3 = num;

    while (1) 
    {
        printf("\n1. Binary\n2. Hexadecimal\n3. Octal \n4. Exit\n");
        scanf("%d", &opt);
        switch(opt) 
        {
            case 1 : for (int i =0; quo!=0 ; i++) 
                        {
                            bin = num1 % 2;
                            quo = num1 / 2;
                            num1 = quo;
                            printf("%d", bin);
                        } 
                     continue;

            case 2 : for (int j = 0; hex >=0; j++) 
                        {
                            hex = num2 % 16;
                            quo = num2 / 16;
                            num2 = quo;
                            printf("%d", hex);
                        }
                      continue;

           case 3 : printf("Octal");
                    continue;

           case 4 : goto exit;
                    continue;
           default : printf("Please enter a valud option.\n");
                     continue;                                                    
        }

        exit : break;
    }

    return 0;
}
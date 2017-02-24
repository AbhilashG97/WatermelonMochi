 # include <stdio.h> 

 int main () 
 {
     int num, rem, rev=0, temp;
     printf("Enter a number.\n");
     scanf("%d", &num);

     temp = num;

     for (int i =1; num > 0; i++) 
     {
         rem = num % 10;
         num = num /10;
         rev = (rev*10) + rem; 
     }

    if (temp == rev) 
    {
        printf("The number entered is a palindrome.\n");
    } else 
    {
        printf("The number entered is not a palindrome.\n");
    }

     return 0;
 }
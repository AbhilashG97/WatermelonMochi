 # include <stdio.h> 

 int main () 
 {
     int num, rem, sum=0;
     printf("Enter a number.\n");
     scanf("%d", &num);

     for (int i =1; num > 0; i++) 
     {
         rem = num % 10;
         num = num /10;
         sum = sum + rem; 
     }

     printf("The sum of the digits of the entered number is %d.\n", sum);

     return 0;
 }
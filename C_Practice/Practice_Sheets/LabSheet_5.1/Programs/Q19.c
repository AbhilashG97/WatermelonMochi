 # include <stdio.h> 

 int main () 
 {
     int num, rem, rev=0;
     printf("Enter a number.\n");
     scanf("%d", &num);

     for (int i =1; num > 0; i++) 
     {
         rem = num % 10;
         num = num /10;
         rev = (rev*10) + rem; 
     }

     printf("Reverse of the entered number is %d.\n", rev);

     return 0;
 }
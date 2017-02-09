# include <stdio.h>

int main()
{
	int num1, num2, a, b, count = 0 ;
	printf("\nEnter First Number:\t");
	scanf("%d", &a);
	printf("\nEnter Second Number:\t");
	scanf("%d", &b);
	num1 = a;
	num2 = b;
	while(num1 >= num2)
	{
	      	num1 = num1 - num2;
      		count++;
   	}
	printf("\nDivision of %d and %d:\nQuotient:\t%d\nRemainder:\t%d\n", a, b, count, num1);
	return 0;
}
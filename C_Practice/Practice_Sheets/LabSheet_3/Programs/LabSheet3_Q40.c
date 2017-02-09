#include <stdio.h>
int main()
{
	int x;
	printf("Enter a number ");
	scanf("%d",&x);
	if(x>=0)
	printf("Absolute value is %d\n",x);
	else
	printf("Absolute value is %d\n",-x);
	return 0;
}
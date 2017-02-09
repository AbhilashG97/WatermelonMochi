#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers.\n");
	scanf("%d%d",&a,&b);
	printf("%d\n",a&b);
	printf("%d\n",a|b);
	printf("%d\n",~a);
	printf("%d\n",~b);
	printf("%d\n",a^b);
	printf("%d\n",a<<2);
	printf("%d\n",b<<2);
	printf("%d\n",a>>2);
	printf("%d\n",b>>2);
	return 0;
}
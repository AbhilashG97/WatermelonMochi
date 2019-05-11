#include<stdio.h>
#include<string.h>

int main()
{
	int flag = 1;
	char str1[128];
	char str2[128];

	fgets(str1, 128, stdin);
	fgets(str2, 128, stdin);

	int c, k;
	int l = strlen(str1);
	if (l > strlen(str2))
	{
		l = strlen(str2);
		c = strlen(str1) - l;
	}

	else
		c = strlen(str2) - l;

	scanf("%d", &k);

	if(c > k)
	{
		printf("No.\n");
		flag = 0;
	}

	if (strcmp(str1, str2) == 0)
		printf("Same\n");
	
	else
	{
		for(int i=0; i<l; i++)
		{
			if(str1[i] != str2[i])
			{
				c++;
				if(c > k)
				{
					printf("No.\n");
					flag = 0;
				}
			}
		}
	}

	if (flag)
		printf("Yes.\n");


	return 0;
}

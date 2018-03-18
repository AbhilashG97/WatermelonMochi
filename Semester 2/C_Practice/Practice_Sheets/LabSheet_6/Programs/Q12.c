# include <stdio.h>

int main () 
{
	int arr[10000], n, flag=0;
	printf("Enter the size of the array.\n");
	scanf("%d", &n);
	printf("Input values into the array.\n");

	for (int i = 0; i<n; i++) 
	{
		scanf("%d", &arr[i]);
	}

	int key = 0;
	printf("Enter the key.\n");
	scanf("%d", &key);

	for (int j=0; j<n; j++) 
	{
		if(arr[j]==key) 
		{
			flag = 1;
		}
	}

	if (flag==1) 
	{
		printf("Element found.\n");
	} else 
	{
		printf("Element not found.\n");
	}

	return 0;
}
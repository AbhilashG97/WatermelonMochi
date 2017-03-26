# include <stdio.h>

int main () 
{
	int arr[10000], n, temp=0, D;
	printf("Enter the size of the array.\n");
	scanf("%d", &n);
	printf("Input values into the array.\n");
	for (int i = 0; i<n; i++) 
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the value by which you want to rotate the elements.\n");
	scanf("%d", &D);

	for (int k =1; k<=D; k++) 
	{

	temp = arr[0];

	for (int j=0; j<=n; j++) 
	{
		arr[j] = arr[j+1];
	}

	arr[n-1] = temp;

	}

	printf("\n\n");

	for (int g=0; g<n; g++) 
	{
		printf("%d ", arr[g]);
	}

	printf("\n");

	return 0;
}


#include<stdio.h>

int main(){
	int m, n, arr[100][100], sum[100], prod[100];
	scanf("%d%d", &m, &n);

	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);

	for(int i=0; i<m; i++)
		prod[i] = 1;

	for(int i=0; i<n; i++)
		sum[i] = 0;
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			sum[i] += arr[j][i];

	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			prod[i] *= arr[i][j];

	int smallest = sum[0];
	int largest = prod[0];

	for(int i=0; i<m; i++)
		if(prod[i] > largest)
			largest = prod[i];

	for(int i=0; i<n; i++)
		if(sum[i] < smallest)
			smallest = sum[i];

	printf("%d is smallest sum\n%dis largest product\n", smallest, largest);

	return 0;
}


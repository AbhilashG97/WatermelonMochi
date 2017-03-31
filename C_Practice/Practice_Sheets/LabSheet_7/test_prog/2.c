#include <stdio.h>
int main(){
	int n,m,a[100][100];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	int sum=0;
	printf("\nrow wise sum;\n");
	for(int i=0;i<n;i++){
		sum=0;

		for(int j=0;j<m;j++)
			sum+=a[i][j];
		printf("%d  ",sum);
	}
	
	printf("\ncolumn wise sum;\n");
	for(int i=0;i<m;i++){
		sum=0;

		for(int j=0;j<n;j++)
			sum+=a[j][i];
		printf("%d  ",sum);
	}
	printf("\ntransose:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		printf("%d ",a[j][i]);
	printf("\n");
	}
	return 0;
}

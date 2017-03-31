#include <stdio.h>
void midd(int[][100],int);
void midd(int a[][100],int n){
	printf("mid row\n");
	for(int i=0;i<n;i++)
		printf("%d ",a[n/2][i]);
	printf("mid column\n");
	for(int i=0;i<n;i++)
		printf("%d ",a[i][n/2]);
		}
	
int main(){
	int n;
	scanf("%d",&n);
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	midd(a,n);
	return 0;
}

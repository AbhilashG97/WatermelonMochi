#include <stdio.h>
int comp(int[],int[],int);

int main(){
	int a[10],b[10];
	int n=10;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	int i=comp(a,b,n);
	if(i){
		printf("equal\n");
	}
	else{
		printf("different\n");
	}
	return 0;
}
int comp(int a[],int b[],int n){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			return 0;
		} else {
			return 1;		
		}
	}
	
}

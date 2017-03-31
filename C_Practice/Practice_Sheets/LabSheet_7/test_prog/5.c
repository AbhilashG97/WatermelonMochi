#include <stdio.h>
int main(){
	int n,a[100],s;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&s);
	int freq=0;
	for(int i=0;i<n;i++){
		if(a[i]==s)
			freq++;
	}
	printf("%d",freq);
	return 0;
}
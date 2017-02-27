    #include <stdio.h>
     
    int main()
    {
    	int t,n,m,k;
    	scanf("%d",&t);
    	for(int i=1;i<=t;i++){
    	scanf("%d %d %d",&n,&m,&k);
    	for(int j=1;j<=k;j++){
    	if(n<m)
    	n=n+1;
    	else if(m<n)
    	m=m+1;
    	else
    	break;
    	}
    	if(n>m)
    	printf("%d\n",n-m);
    	else
    	printf("%d\n",m-n);
    	}
    	
    	return 0;
    }

#include<stdio.h>
int main()
{
 int i,j,s;
 printf("Enter the size:");
 scanf("%d",&s);
 int a[s][s],v[s][s];
 printf("Enter the array elements:");
 for(i=0;i<s;i++)
  for(j=0;j<s;j++)
   scanf("%d",&a[i][j]);
 for(i=0;i<s;i++)
  for(j=0;j<s;j++)
   v[i][j]=0;
 int k=0,l=0,m=s-1,n=s-1;
 while(k<m && l<n)
 {
  for(i=0;i<s;i++)
  {
   if(v[k][i]==0)
   { printf("%d ",a[k][i]);
     v[k][i]=1;}
  }
  k++;
  for(i=0;i<s;i++)
  {
   if(v[i][m]==0)
   { printf("%d ",a[i][m]);
     v[i][m]=1;}
  } 
  m--;
  for(i=s-1;i>=0;i--)
  {
   if(v[n][i]==0)
   { printf("%d ",a[n][i]);
     v[n][i]=1;}
  } 
  n--;
  for(i=s-1;i>=0;i--)
  {
   if(v[i][l]==0)
   { printf("%d ",a[i][l]);
     v[i][l]=1;}
  }
  l++;
 }
 return 0;
}


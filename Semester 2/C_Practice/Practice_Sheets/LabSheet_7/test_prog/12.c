#include <stdio.h>
int main()
{
 int n;
 printf("Enter order:");
 scanf("%d",&n);
 if(n%2==0)
 printf("\n Magic square is not possible");
 else
 {
  int a[n][n],v[n][n],pos1=n/2,pos2=n-1,i,j;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    v[i][j]=0;
   }
  }
  for(i=1;i<=(n*n); )
  {
    if(pos1<0 && pos2==n)
    {
     pos1=0;
     pos2=n-2;
    }
    else 
    {
     if(pos1<0)
     pos1=n-1;
     else if(pos2==n)
     pos2=0;
    }
    if(v[pos1][pos2]!=0)
    {
      pos1=pos1+1;
      pos2=pos2-2;
      continue;
    }
    else
    {
     v[pos1][pos2]=1;
     a[pos1][pos2]=i++;
    }
    pos1=pos1-1;
    pos2=pos2+1;
  }
  for(i=0;i<n;i++)
  {
   printf("\n");
   for(j=0;j<n;j++)
   {
    printf("%d ",a[i][j]);
   }
  }
 }
 return 0;
}

#include <stdio.h>
int main()
{
 int n,i,j,cw,cb;
 printf("Enter the size:");
 scanf("%d",&n);
 int a[n][n];
 printf("Enter the matrix:");
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 printf("\n The run length encoding is:\n");
 for(i=0;i<n;i++)
 {
  cw=0;
  cb=0;
  for(j=0;j<n;j++)
  {
   if(j==0)
   {
    if(a[i][j]==1)
    {
     printf("0 ");
     cb++;
     if(a[i][j+1]==0)
     {
      printf("%d ",cb);
      cb=0;
     }
    }
    else
    {
     cw++;
     if(a[i][j+1]==1)
     { printf("%d ",cw);
       cw=0;}
    }
   }
   else if(a[i][j]==1)
   {
    cb++;
    if(a[i][j+1]==0)
    { 
      printf("%d ",cb);
      cb=0;
    }
    else if(j==n-1)
     printf("%d ",cb);
   }
   else if(a[i][j]==0)
   {
    cw++;
    if(a[i][j+1]==1)
    {
     printf("%d ",cw);
     cw=0;
    }
    else if(j==n-1)
     printf("%d ",cw);
   }
  }
  printf("\n");
 }
 return 0;
}
   

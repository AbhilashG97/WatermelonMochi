#include<stdio.h>
int main()
{
 int c,d,m,n;
 printf("Enter size of the first matrix:");
 scanf("%d %d",&c,&d);
 printf("Enter size of the second matrix:");
 scanf("%d %d",&m,&n);
 if(d!=m)
 printf("Matrix multiplication is not possible.");
 else
 {
  int a[c][d],b[m][n],i,j,e[m][d],k;
  printf("\nEnter matrix a:");
  for(i=0;i<c;i++)
  {
   for(j=0;j<d;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  printf("\nEnter matrix b:");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    scanf("%d",&b[i][j]);
   }
  }
 
  
  printf("\n Matrix multiplication:");
  for(i=0;i<c;i++)
  {
   for(j=0;j<m;j++)
   {
    e[i][j]=0;
    for(k=0;k<c;k++)
    {
     e[i][j]=e[i][j]+(a[i][k]*b[k][j]);
    }
   }
  }
  for(i=0;i<m;i++)
  {
   printf("\n");
   for(j=0;j<d;j++)
   {
    printf("%d ",e[i][j]);
   }
  }
 }
  return 0;
}


#include <stdio.h>
int main()
{
 int a[3][3],i,j,det=0,det1=0;
 printf("Enter the natrix:");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<3;i++){
 	det1=a[i][0];
 	
 	det1*=a[(i+1)%3][1]*a[(i+2)%3][2]-a[(i+2)%3][1]*a[(i+1)%3][2];
 	det+=det1;

 }
 printf("%d\n",det);
 return 0;
}

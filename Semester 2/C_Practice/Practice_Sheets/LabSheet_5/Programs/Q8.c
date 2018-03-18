#include<stdio.h>

void main()
{
 int x,y,i,r=1,t;
 printf("Enter the base:");
 scanf("%d",&x);
 printf("Enter the power:");
 scanf("%d",&y);

 for(i=1;i<=y;i++)
 {
    t=x;
    r=r*t;
 }
 
 printf("Result: %d\n",r);

}


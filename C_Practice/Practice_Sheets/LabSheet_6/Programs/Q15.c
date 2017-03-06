#include <stdio.h>
int main()
 {
    int data[100],i,n,steps,temp;
    printf("Enter the number of elements to be sorted: \n");
    scanf("%d",&n);
    printf("Enter element:\n");
    for(i=0;i<n;++i)
      {
       scanf("%d",&data[i]);
    }
    for(steps=0;steps<n;++steps)
    for(i=steps+1;i<n;++i)
     {
         if(data[steps]>data[i])  

          {
             temp=data[steps];
             data[steps]=data[i]; 
             data[i]=temp;
         }
    }

    printf("In ascending order: ");
    for(i=0;i<n;++i)
        printf("%d  ",data[i]);
    printf("\n");    
    return 0;
}
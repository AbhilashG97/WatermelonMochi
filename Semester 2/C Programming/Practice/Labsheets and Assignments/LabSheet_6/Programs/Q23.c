#include<stdio.h>

int main(){

    char str1[100],str2[100];
    int compare;

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    int i=0,flag=0;
   
    while(str1[i]!='\0' && str2[i]!='\0'){
         if(str1[i]!=str2[i]){
             flag=1;
             break;
         }
         i++;
    }

    if (flag==0 && str1[i]=='\0' && str2[i]=='\0')
         compare = 1;
    else
         compare = 0;

    if(compare == 1)
         printf("Both strings are equal.\n");
    else
         printf("Both strings are not equal.\n");
 
    return 0;
}




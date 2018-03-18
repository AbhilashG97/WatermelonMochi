#include<stdio.h>

int main(){

    char str1[100],str2[100];
    int compare=0;

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    compare = strcmp(str1, str2);

    if(compare == 1)
         printf("Both strings are equal.\n");
    else
         printf("Both strings are not equal.\n");
 
    return 0;
}




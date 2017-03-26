# include <stdio.h>

// Compare the two arrays
void comp(int arr1[], int arr2[], int size) {
    int flag = 0;
    for (int i=0; i<=size; i++) {
        if (arr1[i]==arr2[i]){
            flag = 1;
        } else {
            flag = 0;
        }
    }
    if (flag==1) {
        printf("All the elements in both the arrays are same.\n");
    } else {
        printf("All the elements in both the arrays are not same.\n");
    }
}

// Main function 
int main() {

    int arr1[10], arr2[10], num1, num2,size=0;
    printf("Enter 10 integers in the first array.\n");
    for (int i=0; i<10; i++) 
        {
            scanf("%d", &arr1[i]);
            size++;
        }
    printf("Enter 10 integers in the second array.\n");
    for(int j=0; j<10; j++) 
        {
          scanf("%d", &arr2[j]);
        }
    comp(arr1, arr2, size);

    return 0;    
}
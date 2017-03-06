# include <stdio.h>

int main () 
{
    int arr[25], n, count=0;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    printf("Enter the elements in the array.\n");
    for(int k=0; k<n; k++) 
    {
        scanf("%d", &arr[k]);
    }

    printf("Duplicates in the array are located in the following indecies - \n");

    for (int i=0; i<n; i++) 
    {
        for (int j = i+1; j<n; j++) 
        {
            if (arr[i]==arr[j]) 
            {
                printf("%d\t%d\n", i,j);
            }
        }       
    }

    return 0;
}
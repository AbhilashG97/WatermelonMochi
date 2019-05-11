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

    for (int i=0; i<n; i++) 
    {
        for (int j = i+1; j<n; ) 
        {
            if (arr[j]==arr[i]) 
            {
                for (int k = j; k < n; k++) 
                {
                    arr[k] = arr[k+1];
                }
                n--;
            } else 
            {
                j++;
            }
        }       
    }
    printf("The array after deleting duplicates.\n");
    for (int h=0; h <n; h++) 
    {
        printf("%d\n", arr[h]);
    }

    return 0;
}
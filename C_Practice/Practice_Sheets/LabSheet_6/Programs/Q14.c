# include <stdio.h> 

int main () 
{
    int arr[100], N, temp;
    printf("Enter the size of the array.\n");
    scanf("%d", &N);
    printf("Enter the elements.\n");
    for (int i =0; i<N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements after bubble sorting.\n");

    for (int j =0; j<N; j++) 
    {
        for (int k = j +1; k<N; k++) 
        {
            if (arr[j]>arr[k]) 
            {
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

    for (int o =0; o<N; o++) 
    {
        printf("%d\n", arr[o]);
    }

    return 0;
}
# include <stdio.h>

int main () 
{
    int pos, num, arr[50], n;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    printf("Enter the position and the number separated by a space.\n");
    scanf("%d %d" , &pos, &num);
    printf("Enter elements into the array.\n");
    for(int i =0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int j=n-1; j>=pos-1; j--) 
    {
        arr[j+1] = arr[j];
    }
    arr[pos-1] = num;
    n++;
    printf("\n");
    for (int i = 0; i<n; i++) 
    {
        printf("%d\n", arr[i]);
    }
}
# include <stdio.h>

int main() {
    int opt, arr[100][100], arrT[100][100], m, n, sum=0, rsum=0, csum=0;
    printf("Enter the number of rows.\n");
    scanf("%d", &m);
    printf("Enter the number of columns.\n");
    scanf("%d", &n);
    while(1){
    printf("\nEnter an option.\n");
    printf("\n1. Enter Elements.\n2. Display Elements.\n3. Sum of all Elements.\n4. Display row-wise sum\n5. Display column-wise sum.\n6. Transpose of the matrix.\n7. Exit\n");
    scanf("%d", &opt);
    if(opt==7) {
        break;
    }
    switch (opt) {
        case 1 : 
            for (int k=0; k<m; k++) {
                for (int l=0; l<n; l++) {
                    scanf("%d" ,&arr[k][l]);
                }
            }
        continue;
        case 2 : 
            for (int i=0; i<m; i++) {
                    printf("\n");
                for (int j=0; j<n; j++) {
                    printf("%d ",arr[i][j]);
                }
            }
        continue;
        case 3 : 
            for (int i=0; i<m; i++) {
                    printf("\n");
                for (int j=0; j<n; j++) {
                    sum = sum + arr[i][j];
                }
            }
            printf("%d\n", sum);
        continue;
        case 4 : 
            for (int i=0; i<m; i++) {
                    printf("\n");
                    rsum=0;
                for (int j=0; j<n; j++) {
                    rsum = rsum + arr[i][j];
                }
                printf("%d\n" ,rsum);
            }
        continue;
        case 5 :
            for (int i=0; i<m; i++) {
                    printf("\n");
                    csum=0;
                for (int j=0; j<n; j++) {
                    csum = csum + arr[j][i];
                }
                printf("%d\n" ,csum);
            }
        continue;
        case 6 : 
            for (int i=0; i<m; i++) {
                    printf("\n");
                for (int j=0; j<n; j++) {
                    arrT[j][i] = arr[i][j];
                }
            }
            for (int i=0; i<m; i++) {
                    printf("\n");
                for (int j=0; j<n; j++) {
                    printf("%d ",arrT[i][j]);
                }
            }
        continue;
    }
}
    return 0;
}
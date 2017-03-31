#include <stdio.h>

int main()
{
        int m, mat[100][100];
        scanf("%d", &m);

        for(int i=0; i<m; i++)
                for(int j=0; j<m; j++)
                        scanf("%d", &mat[i][j]);

	int sum1 = 0;
	int sum2 = 0;

	for(int i=0; i<m; i++)
        {
                sum1 += mat[i][i];

                sum2 += mat[i][m-1-i];
        }

	printf("Left dia: %d\n", sum1);
	printf("Right dia: %d\n", sum2);

	return 0;
}

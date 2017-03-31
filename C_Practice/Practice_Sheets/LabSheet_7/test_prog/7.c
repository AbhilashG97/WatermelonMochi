#include <stdio.h>
int main()
{
        int m, n, mat[100][100];
        scanf("%d", &m);

        for(int i=0; i<m; i++)
                for(int j=0; j<m; j++)
                        scanf("%d", &mat[i][j]);

	int min1 = mat[0][0];
	int min2 = mat[0][m-1];
	for(int i=0; i<m; i++)
	{
		if (mat[i][i] < min1)
			min1 = mat[i][i];

		if (mat[i][m-1-i] < min2)
			min2 = mat[i][m-1-i];
	}

	printf("%d\n%d\n", min1, min2);

	return 0;
}

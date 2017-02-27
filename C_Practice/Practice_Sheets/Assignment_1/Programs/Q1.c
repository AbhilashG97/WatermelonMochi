# include <stdio.h>

int main () 
{   
    int N, M, K, T;
    scanf("%d", &T);
    for (int i =1; i<=T; i++) 
    {
        scanf("%d %d %d", &N, &M, &K);
        if(N>M) 
        {
            for (int j =1; j <=K; j++) 
            {
                M = M + 1;
            }
        } else if (M>N) 
        {
            for (int k = 1; k <=K; k++) 
            {
                N = N + 1;
            }
        } else 
        {
            break;
        }

        if (N>M) 
        {
            printf("%d\n", N-M);
        } else 
        {
            printf("%d\n", M-N);
        }

        M = 0;
        N = 0;
    }
          return 0;
    }

   

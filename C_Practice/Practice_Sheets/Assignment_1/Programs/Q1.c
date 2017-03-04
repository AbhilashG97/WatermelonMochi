# include <stdio.h>

int main () 
{   
    int N, M, K, T;
    scanf("%d", &T);
    while (T--) 
    {
        scanf("%d %d %d", &N, &M, &K);
        for (int j =1; j <=K; j++){
        if(N>M) 
        {
                M++;
        } else if (M>N) 
        {
                N++;   
        } else 
        {
            break;
        }
        }
        if (N>M) 
        {
            printf("%d\n", N-M);
        } else 
        {
            printf("%d\n", M-N);
        }

        // M = 0;
        // N = 0;
    }
          return 0;
    }

   

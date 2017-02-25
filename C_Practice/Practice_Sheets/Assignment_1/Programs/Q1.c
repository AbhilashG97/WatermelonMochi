# include <stdio.h>

int main () 
{   
    // N is the number of apples.
    // M is the number of oranges.
    // K is the number of gold coins.
    // T is the number of test cases.

    int N, M, K, T, diff=0, count1 = 0, count2 = 0;
    scanf("%d", &T);

    // Number of test cases.
    for (int i =1; i<=T; i++) 
    {
        scanf("%d %d %d", &N, &M, &K);

            if (N>M) 
            {
                diff = N - M;
                if ( diff != 1) 
                {
                    for (int j = 1 ; diff > 0; j++) 
                    {
                        diff = N - M;
                        if (diff == 1) {break;}
                        M++;
                        count1 = count1 + 1;
                    }
                }
            } else {
                diff = M - N;
                if (diff != 1) 
                {
                    for (int z = 1; diff > 0; z++) 
                    {
                        diff = M - N;
                        if(diff == 1) {break;}
                        N++;
                        count2 = count2 + 1;
                    }
                }
            }
            if (N>M) 
            {
                printf("%d\n", count1);
            } else 
            {
                printf("%d\n", count2);
            }
            count1 = 0;
            count2 = 0;
        }


          return 0;
    }

   

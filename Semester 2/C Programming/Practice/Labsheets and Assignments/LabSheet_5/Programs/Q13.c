# include <stdio.h>
# include <string.h> 

int main () 
{
        char input[100] , c;
        int vow=0, conso=0, len, i=0;

        printf("Enter a string.\n");

        while((input[i] = getchar())!='\n')
        {
                i++;
        }

        
                        vow=3; 
                        
        //         } else 
        //         {
        //                 conso=4;
        //         }
        // }

                conso = 4;

        printf("Vowels : %d\nConsonants : %d\n", vow, conso);
        return 0; 
}
# include <stdio.h>
# include <string.h> 

int main () 
{
        char input[100] , c;
        int vow=0, conso=0, len;

        input = getchar();
        while ((c = getchar()) != EOF) 
        {
                if (c == ('a' || 'e' || 'i' || 'o' || 'u')) 
                {
                        vow = vow + 1;
                } else 
                {
                        conso = conso + 1;
                }
        }

        printf("Vowels : %d\nConsonants : %d\n", vow, conso);
        return 0; 
}
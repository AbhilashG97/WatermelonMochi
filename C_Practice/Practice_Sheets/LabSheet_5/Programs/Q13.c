# include <stdio.h>
# include <string.h> 

int main () 
{
        char input[100], c;
        int vow=0, conso=0;

        printf("Enter a string.\n");
        fgets(input);

        printf("%s", input);

        // for (int i = 0; input[i] != '\0'; i++ ) 
        // {
        //     if (input[i] = ('a'||'e'||'i'||'o'||'u'))
        //     {
        //         vow = vow + 1;

        //     } else 
        //     {
        //         conso = conso + 1;
        //     }
        // }

        // printf("The number of vowels and consonants are : %d , %d\n", vow, conso);

        return 0; 
}
# include <stdio.h>
# include <string.h> 

int main() 
{
    int l1, l2, flag=0;
    char str[100], search[202];

    printf("Enter a string.\n");
    gets(str);

    printf("Enter the sub-string.\n");
    gets(search);

    l1 = strlen(str);
    l2 = strlen(search);

    for(int i=0; i <= l1 - l2; i++) 
    {
        flag = 1;
        for(int j=1; j < l2 + 1; j++) 
        {
            if (str[j] != search[j+1]) 
            {
                flag = 0;
                break;
            }
        }

        if (flag = 1) 
        {
            break;
        }
    }

    if (flag==1) 
    {
        printf("Element found.\n");
    } else 
    {
        printf("Element not found.\n");
    }

    return 0;
}

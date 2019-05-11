# include <stdio.h>

int main () 
{
    int num=0, pos=0, neg=0, zer=0, temp=999;

    while (num!=999) 
    {
        printf("Enter a number.\n");
        scanf("%d", &num);

        if (num==999) 
        {
            break;
        }

        if (num > 0) 
        {
            pos = pos + 1;
        } else if (num < 0) 
        {
            neg =  neg + 1;
        } else 
        {
            zer = zer + 1;
        }
    }

    printf("The number positive integres entered : %d\nThe number zero\'s entered : %d\nThe number negative integres entered : %d\n", pos, zer, neg);
    return 0;
}
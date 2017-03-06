import java.util.scanner;

class CHN09
{

public static void main (String args[]) 
{
    int T, a=0, b=0, len;
    char input[100], key;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%s", input);
        len = strlen(input);

        for (int j = 0; j < len; j++ ) 
        {
            if (input[j] == 'a') 
            {
                a = a + 1;
            } else 
            {
                b = b + 1;
            }
        } 
        if (a<b) 
        {
            printf("%d\n", a);
        } else 
           {
              printf("%d\n", b);
           }

           a = 0;
           b = 0;
    }

    return 0;
}
}

}

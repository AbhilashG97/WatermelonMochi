# include <stdio.h>

int main ()
{
  int a, b, c;
  printf("Enter three numbers.\n");
  scanf("%d%d%d", &a,&b,&c);
  // Comparesion
  if (a<b && a<c)
  {
    printf("%d is the smallest.\n", a);
  } else if (b < c)
  {
    printf("%d is the smallest.\n", b);
  } else
  {
    printf("%d is the smallest.\n" , c);
  }
return 0;
}

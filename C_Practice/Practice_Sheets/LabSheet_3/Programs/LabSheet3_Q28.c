# include <stdio.h>

int main ()
{
  float num1, num2;
  printf("Enter two numbers.\n");
  scanf("%f%f", &num1, &num2);
  if (num1 > num2)
  {
    printf("%f is the larger number.\n",num1 );
  } else
  {
    printf("%f is the larger number.\n",num2 );
  }

  return 0;
}

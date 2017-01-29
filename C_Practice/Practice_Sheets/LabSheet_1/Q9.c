# include <stdio.h>

int main()
{
  int F, C;
  printf("Enter the value of temperature in Fahrenheit.\n");
  scanf("%d", &F);
  C = 5*(F-32)/9;
  printf("The corresponding value of temperature in Celcius is %d *C\n" , C );
  return 0;
}

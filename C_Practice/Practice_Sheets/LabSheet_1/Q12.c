#include <stdio.h>

int main()
{
  int addition, subtraction, multiplication, division, modulo_division, a, b ;
  printf("Enter the values for two integers a and b repectively.\n");
  scanf("%d%d", &a, &b );
  addition = a + b;
  subtraction = a - b;
  multiplication = a * b;
  division = a / b;
  modulo_division = a % b;
  printf("Addition of two integers is %d.\n" ,addition);
  printf("Subtraction of two integers is %d.\n" , subtraction);
  printf("Multiplication of two integers is %d.\n" , multiplication);
  printf("Division of two integers is %d.\n" , division);
  printf("Modulo division of two integers is %d.\n" , modulo_division);

  return 0;
}

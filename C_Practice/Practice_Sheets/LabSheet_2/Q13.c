#include <stdio.h>

int main()
{
  float addition, subtraction, multiplication, division, modulo_division, a, b ;
  printf("Enter the values for two integers a and b repectively.\n");
  scanf("%f%f", &a, &b );
  addition = a + b;
  subtraction = a - b;
  multiplication = a * b;
  division = a / b;
  printf("Addition of two integers is %f.\n" ,addition);
  printf("Subtraction of two integers is %f.\n" , subtraction);
  printf("Multiplication of two integers is %f.\n" , multiplication);
  printf("Division of two integers is %f.\n" , division);

  return 0;
}

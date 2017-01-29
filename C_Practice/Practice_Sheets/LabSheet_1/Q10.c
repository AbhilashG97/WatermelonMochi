#include <stdio.h>
#define PI 22/7

int main()
{
  int R, Area, Perimeter;
  printf("Enter the value of the radius.\n");
  scanf("%d", &R);
  Area = PI*(R*R);
  Perimeter = 2*PI*R;

  printf("The Area is of a circle is %d sq. units.\n" , Area);
  printf("The Perimeter of a circle is %d sq. units.\n" , Perimeter);
  return 0;
}

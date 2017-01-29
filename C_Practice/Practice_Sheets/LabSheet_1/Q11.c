#include <stdio.h>
#include <math.h>

int main()
{
  int x1, x2, y1, y2, D;
  printf("Enter the values of x2, x1, y2, y1 respectively.\n");
  scanf("%d%d%d%d" ,&x2, &x1, &y1 ,&y2);
  D = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("The distance between two points is %d units\n", D);
  return 0;
} 

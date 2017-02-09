# include <stdio.h>
# include <math.h>

int main()
{
  int a, volume;
  printf("Enter the side of a cube.\n");
  scanf("%d", &a);
  volume = pow(a, 3);
  printf("%d cubic units is the volume of the cube.\n", volume);
  return 0;
}

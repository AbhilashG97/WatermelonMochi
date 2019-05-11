#include <stdio.h>

int main()
{
  char input;
  int charges, hours;
  printf("Enter the type of vehicle.\n'c' for car, 'b' for bus\\truck, 's' for scooter.\n");
  scanf("%c",&input);
  if (input=='c')
  {
    printf("Enter the number of hours parked.\n");
    scanf("%d", &hours);
    charges = hours * 10;
    printf("Please pay RS %d.\n", charges);
  } else if (input =='b')
  {
    printf("Enter the number of hours parked.\n");
    scanf("%d", &hours);
    charges = hours * 50;
    printf("Please pay RS %d.\n", charges);
  } else {
    printf("Enter the number of hours parked.\n");
    scanf("%d", &hours);
    charges = hours * 25;
    printf("Please pay RS %d.\n", charges);
  }

  return 0;
}

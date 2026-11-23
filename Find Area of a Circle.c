#include<stdio.h>
#include<math.h>
int main()
{
  int radious;
  float pi=3.1416,area;
  printf("Enter the value of radious \n");
  scanf("%d",&radious);
  area= pi*pow(radious,2);
  printf("the area is: %f,\n",area);
  return 0;
}

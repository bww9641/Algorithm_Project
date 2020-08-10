#include<stdio.h>
#include<math.h>
int main()
{
  double m;
  scanf("%lf",&m);
  m=roundf(m*100)/100;
  printf("%lf",m);
  return 0;
}

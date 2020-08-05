#include<stdio.h>
#include<math.h>
int main()
{
  double a,r,n;
  scanf("%lf %lf %lf",&a,&r,&n);
  printf("%.0lf",a*pow(r,n-1));
  return 0;
}
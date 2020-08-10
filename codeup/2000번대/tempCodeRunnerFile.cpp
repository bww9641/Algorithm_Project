#include<stdio.h>

double f(double x)
{

      double sum = x;
      double result = x;
      double fact = 1.0f;
      double x2 = x*x*-1.0f;;

 

      //유한한 테일러 급수 전개
      for(int i=1;i<9;++i)
      {
            fact *= ((2*i) * (2*i+1));
            result *= x2;
            sum += (result / fact);
      }
      return sum;
}

double g(double x)
{

      double sum = 1;
      double result = 1;
      double fact = 1.0f;
      double x2 = x*x*-1.0f;;

 

      //유한한 테일러 급수 전개
      for(int i=1;i<9;++i)
      {
            fact *= ((2*i-1) * (2*i));
            result *= x2;
            sum += (result / fact);
      }
      return sum;
}

int main()
{
  int n;
  scanf("%d",&n);
  double nn;
  n%=360;
  nn=(double)n;
  double a,b,c;
  a=f(3.14159265358979/180*nn);
  b=g(3.14159265358979/180*nn);
  c=a/b;
  printf("%.6lf %.6lf ",a,b);
  if(n%180==90) printf("Infinity");
  else printf("%.6lf",c);
  return 0;
}
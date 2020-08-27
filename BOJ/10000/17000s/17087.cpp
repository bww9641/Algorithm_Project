#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
  if(b==0) return a;
  else return gcd(b,a%b);
}

int main()
{
  int n,s,t,a,res;
  scanf("%d %d",&n,&s);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&t);
    a=abs(s-t);
    if(i==0) res=a;
    else res=gcd(res, a);
  }
  printf("%d",res);
  return 0;
}
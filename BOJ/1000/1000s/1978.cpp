#include<stdio.h>

int main()
{
  int a[1005]={},n,cnt=0,t; // 0 - prime, 1 - not prime
  a[1]=1;
  for(int i=2;i<=33;i++)
  {
    for(int j=2*i;j<=1000;j+=i)
    {
      a[j]=1;
    }
  }
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&t);
    if(!a[t]) cnt++;
  }
  printf("%d",cnt);
  return 0;
}
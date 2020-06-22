#include<stdio.h>

int main()
{
  int n,d[30]={};
  scanf("%d",&n);
  d[0]=0;
  d[1]=1;
  for(int i=2;i<=n;i++)
  {
    d[i]=d[i-1]+d[i-2];
  }
  printf("%d",d[n]);
  return 0;
}
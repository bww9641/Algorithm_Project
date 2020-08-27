#include<stdio.h>

int main()
{
  int d[1005]={};
  d[0]=0;
  d[1]=1;
  d[2]=2;
  for(int i=3;i<=1000;i++)
  {
    d[i]=(d[i-1]+d[i-2])%10007;
  }
  int k;
  scanf("%d",&k);
  printf("%d",d[k]);
  return 0;
}
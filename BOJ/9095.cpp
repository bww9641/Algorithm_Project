#include<stdio.h>

int main()
{
  int T, n, d[20]={};
  scanf("%d",&T);
  d[0]=1;
  d[1]=1;
  d[2]=2;
  for(int t=0;t<T;t++)
  {
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
      d[i]=d[i-1]+d[i-2]+d[i-3];
    }
    printf("%d\n",d[n]);
  }
  return 0;
}
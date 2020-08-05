#include<stdio.h>

int main()
{
  int m,n,sw,a[1000005]={};
  scanf("%d %d",&m,&n);
  for(int i=2;i<=1000000;i++)
  {
    if(a[i]==1) continue;
    a[i]=2;
    for(int j=i*i;j<=1000000;j+=i)
    {
      a[j]=1;
    }
  }
  for(int i=m;i<=n;i++)
  {
    if(a[i]==2) printf("%d\n",i);
  }
  return 0;
}
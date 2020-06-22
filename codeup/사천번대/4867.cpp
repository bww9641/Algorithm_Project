#include<stdio.h>

int main()
{
  unsigned long long res=0,min=1000000000;
  int n,i,j;
  int r[100005]={},c[100005]={};
  scanf("%d",&n);
  for(i=0;i<n-1;i++)
  {
    scanf("%d",&r[i]);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d",&c[i]);
  }
  for(i=0;i<n-1;i++)
  {
    if(c[i]<min) min=c[i];
    res+=min*r[i];
  }
  printf("%llu",res);
  return 0;
}

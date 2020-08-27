#include<stdio.h>

int main()
{
  int k,ans=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&k);
    ans+=k;
  }
  printf("%d",ans);
  return 0;
}
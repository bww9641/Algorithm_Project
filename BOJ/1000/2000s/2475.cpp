#include<stdio.h>

int main()
{
  int k,ans=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&k);
    ans=(ans+(k*k)%10)%10;
  }
  printf("%d",ans);
  return 0;
}
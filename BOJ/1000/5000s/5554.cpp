#include<stdio.h>

int main()
{
  int a[6]={1,1,2,2,2,8};
  int k;
  for(int i=0;i<6;i++)
  {
    scanf("%d",&k);
    printf("%d ",a[i]-k);
  }
  return 0;
}
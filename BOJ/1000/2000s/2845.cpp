#include<stdio.h>

int main()
{
  int a,b,c[5]={};
  scanf("%d %d",&a,&b);
  for(int i=0;i<5;i++)
  {
    scanf("%d",&c[i]);
    printf("%d ",c[i]-a*b);
  }
  return 0;
}
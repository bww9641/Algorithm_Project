#include<stdio.h>

int main()
{
  int T,h,w,n;
  scanf("%d",&T);
  for(int i=0;i<T;i++)
  {
    scanf("%d %d %d",&h,&w,&n);
    printf("%d%02d",n%h==0?h:n%h,n%h==0?n/h:n/h+1);
  }
  return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[4]={},sum=0,t1,t2,min=2147483647;
  for(int i=0;i<4;i++)
  {
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      t1=a[i]+a[j];
      t2=sum-t1;
      if(min>abs(t1-t2)) min=abs(t1-t2);
    }
  }
  printf("%d",min);
  return 0;
}
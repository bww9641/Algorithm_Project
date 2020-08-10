#include<stdio.h>

int main()
{
  int n,remain[1005]={},quotient[1005]={},a,b,integer;
  scanf("%d %d",&a,&b);
  integer=a/b;
  a%=b;
  int tmp=a*10,idx=0,isset=0;
  while(1)
  {
    quotient[idx]=tmp/b;
    remain[idx]=tmp%b;
    for(int i=0;i<idx;i++)
    {
      if(remain[i]==remain[idx]&&quotient[i]==quotient[idx])
      {
        printf("%d.",integer);
        for(int j=0;j<i;j++) printf("%d",quotient[j]);
        printf("(");
        for(int j=i;j<idx;j++)
        {
          printf("%d",quotient[j]);
        }
        printf(")");
        isset=1;
        break;
      }
    }
    if(isset==1) break;
    tmp=10*remain[idx];
    idx++;
  }
  return 0;
}

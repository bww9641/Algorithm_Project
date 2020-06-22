#include<stdio.h>
#include<math.h>
int main()
{
  int T,x,y,cnt,sum;
  scanf("%d",&T);
  for(int l=0;l<T;l++)
  {
    scanf("%d %d",&x,&y);
    long long i=1;
    while(i*i<=y-x)
    {
      i++;
    }
    i--;
    long long k=y-x-i*i;
    k=(long long)ceil((double)k/i);
    printf("%lld\n",i*2-1+k);
  }
  return 0;
}
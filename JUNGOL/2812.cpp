#include<stdio.h>

int main()
{
  long long n,sum=0;
  scanf("%lld",&n);
  if(n<10){
    printf("%lld",n);
    return 0;
  }
  while(n>=10)
  {
    sum=0;
    while(n)
    {
      sum+=n%10;
      n/=10;
    }
    printf("%lld\n",sum);
    if(sum>=10) n=sum;
  }
  return 0;
}

//현재 자리수와 마지막 자리의 수를 따로 생각해준다.
#include<stdio.h>

int main()
{
  long long n;
  //i: 현재 자리 수
  //j: 마지막 자리 수
  long long d[105][2]={};
  scanf("%lld",&n);
  d[1][1]=1;
  for(int i=2;i<=n;i++)
  {
    d[i][0]=d[i-1][0]+d[i-1][1];
    d[i][1]=d[i-1][0];
  }
  printf("%lld",d[n][0]+d[n][1]);
  return 0;
}
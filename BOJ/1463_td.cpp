//TOP-DOWN
#include<stdio.h>
#include<algorithm>
using namespace std;

int d[1000005];

int f(int n){
  if(n==1) return 0;
  if(d[n]>=0) return d[n];
  int result=f(n-1)+1;
  if(n%3==0) result=min(result,f(n/3)+1);
  if(n%2==0) result=min(result,f(n/2)+1);
  d[n]=result;
  return result;
}

int main()
{
  int n;
  fill(d,d+1000005,-1);
  scanf("%d",&n);
  printf("%d",f(n));
  return 0;
}
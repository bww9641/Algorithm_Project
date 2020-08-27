#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int a[10005]={},d[10005]={},n;
  scanf("%d",&n);
  for(int i=3;i<n+3;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=3;i<n+3;i++)
  {
    d[i]=max(d[i-3]+a[i-1]+a[i], d[i-2]+a[i]);
    d[i]=max(d[i-1],d[i]);
  }
  printf("%d",d[n+2]);
  return 0;
}
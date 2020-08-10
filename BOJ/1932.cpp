#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int n,a[505][505]={},d[505][505]={},m=0;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }

  d[1][1]=a[1][1];
  d[2][1]=a[1][1]+a[2][1];
  d[2][2]=a[1][1]+a[2][2];
  for(int i=3;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      d[i][j]=a[i][j]+max(d[i-1][j-1],d[i-1][j]);
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(m<d[n][i]) m=d[n][i];
  }
  printf("%d",m);
  return 0;
}
#include<stdio.h>
#include<algorithm>
using namespace std;
int d[101][10005],m[101],c[101];
int main()
{
  int N,M,i,j,csum=0;
  scanf("%d %d",&N,&M);
  for(i=1;i<=N;i++) scanf("%d",&m[i]);
  for(i=1;i<=N;i++) scanf("%d",&c[i]),csum+=c[i];
  for(i=1;i<=N;i++)
    for(j=0;j<=csum;j++)
    {
      if(j>=c[i]) d[i][j]=max(d[i-1][j],d[i-1][j-c[i]]+m[i]);
      else d[i][j]=d[i-1][j];
    }
  int a=10005;
  for(j=0;j<=csum;j++)
  {
    if(d[N][j]>=M&&ans>j)
    {
      ans=j;
    }
  }
  printf("%d",a);
}

#include<stdio.h>

int main()
{
  int k,n,d[15][15]={};
  int T;
  scanf("%d",&T);
  for(int i=0;i<T;i++)
  {
    scanf("%d %d",&k,&n);
    for(int j=1;j<=n;j++)
    {
      d[0][j]=j;
    }
    for(int j=1;j<=k;j++)
    {
      for(int l=1;l<=n;l++)
      {
        d[j][l]=d[j-1][l]+d[j][l-1];
      }
    }
    printf("%d\n",d[k][n]);
  }
  return 0;
}
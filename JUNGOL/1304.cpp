#include<stdio.h>

int main()
{
  int a[105][105]={},cnt=1,i,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      a[j][i]=cnt++;
  for(i=1;i<=n;i++,puts(""))
    for(j=1;j<=n;j++)
      printf("%d ",a[i][j]);
  return 0;
}

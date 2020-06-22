#include<stdio.h>

int main()
{
  char a[105][105]={};
  int n,i,j,cnt=0;
  scanf("%d",&n);
  for(j=n-1;j>=0;j--)
  {
    for(i=n-1;i>=0;i--)
    {
      a[i][j]=(cnt++)%26+'A';
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%c ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}

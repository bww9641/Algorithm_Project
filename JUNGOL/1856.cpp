#include<stdio.h>

int main()
{
  int n,m,cnt=1;
  scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++)
  {
    if(i%2==1)
    {
      for(int j=1;j<=m;j++) printf("%d ",cnt++);
    }
    else
    {
      cnt=cnt+m-1;
      for(int j=m;j>=1;j--) printf("%d ",cnt--);
      cnt=cnt+m+1;
    }
    printf("\n");
  }
  return 0;
}

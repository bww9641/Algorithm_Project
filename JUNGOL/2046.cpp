#include<stdio.h>

int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  if(m==1)
  {
    for(int i=1;i<=n;i++,puts(""))
      for(int j=1;j<=n;j++)
        printf("%d ",i);
  }
  if(m==2)
  {
    for(int i=1;i<=n;i++,puts(""))
    {
      for(int j=1;j<=n;j++)
      {
        printf("%d ",i%2==1?j:n-j+1);
      }
    }
  }
  if(m==3)
  {
    for(int i=1;i<=n;i++,puts(""))
      for(int j=1;j<=n;j++)
        printf("%d ",i*j);
  }
  return 0;
}

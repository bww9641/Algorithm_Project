#include<stdio.h>

int main()
{
  int T,m,n,x,y;
  scanf("%d",&T);
  for(int i=0;i<T;i++)
  {
    scanf("%d %d %d %d",&m,&n,&x,&y);
    if(x>y) printf("-1\n");
    else printf("%d\n",m*x+y);
  }
}
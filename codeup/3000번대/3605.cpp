#include<stdio.h>

int arr[115][115]={},n;

void bfs1(int x,int y)
{

}

void bfs2(int x,int y)
{

}

int main()
{
  int a,b,di[4]={-1,1,0,0},dj[4]={0,0,-1,1};
  scanf("%d %d",&a,&b);
  arr[a][b]=1;
  scanf("%d %d",&a,&b);
  arr[a][b]=2;
  scanf("%d",&n);
  for(int i=1;i<=60;i++)
  {
    for(int j=1;j<=n;j++)
    {
      for(int k=1;k<=n;k++)
      {
        if(arr[j][k]==1)
        {
          for(int t=0;t<4;t++)
          {
            if(arr[j+di[t]][k+dj[t]]) ;
          }
        }
      }
    }
  }
  printf("GOOD");
  return 0;
}
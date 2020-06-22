#include<stdio.h>
#include<cstring>
char a[2201][2201]={};

void f(int x,int y,int num)
{
  if(num==1)
  {
    a[x][y]='*';
    return;
  }
  int div=num/3;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(i==1&&j==1) continue;
      else f(x+i*div,y+j*div,div);
    }
  }
}

int main()
{
  int n;
  scanf("%d",&n);
  memset(a,' ',sizeof(a));
  f(0,0,n);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%c",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
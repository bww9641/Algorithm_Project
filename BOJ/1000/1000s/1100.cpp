#include<cstdio>
#include<iostream>
using namespace std;
char map[10][10];
int main()
{
  int i,j,cnt=0;
  for(i=0;i<8;i++)
  {
    scanf("%s",map[i]);
  }
  for(i=0;i<8;i++)
  {
    for(j=0;j<8;j++)
    {
      if((i+j)%2==0&&map[i][j]=='F') cnt++;
    }
  }
  printf("%d",cnt);
  return 0;
}

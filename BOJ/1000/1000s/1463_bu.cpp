//BOTTOM-UP
#include<stdio.h>
#include<algorithm>
using namespace std;

int d[100005];

int main()
{
  int n;
  scanf("%d",&n);
  fill(d,d+100005,1000000000);
  d[1]=0;
  for(int i=1;i<n;i++)
  {
    d[i+1]=min(d[i+1],d[i]+1);
    if(i*2<=1000000) d[i*2]=min(d[i*2],d[i]+1);
    if(i*3<=1000000) d[i*3]=min(d[i*3],d[i]+1);
  }
  printf("%d",d[n]);
  return 0;
}
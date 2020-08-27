#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int n,arr[1005][3]={},d[1005][3]={};
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
  }
  d[0][0]=arr[0][0];
  d[0][1]=arr[0][1];
  d[0][2]=arr[0][2];
  for(int i=1;i<n;i++)
  {
    d[i][0]=min(arr[i][0]+d[i-1][1],arr[i][0]+d[i-1][2]);
    d[i][1]=min(arr[i][1]+d[i-1][0],arr[i][1]+d[i-1][2]);
    d[i][2]=min(arr[i][2]+d[i-1][0],arr[i][2]+d[i-1][1]);
  }
  printf("%d",min(min(d[n-1][0],d[n-1][1]),d[n-1][2]));
  return 0;
}
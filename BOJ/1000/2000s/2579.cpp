//자신의 위치 바로 앞에서 몇칸으로 뛰었는지를 확인하여 풀이
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  // i : 바로 앞의 오른 계단 수
  // j : 현재 위치
  int d[3][305]={},a[305]={};
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  d[1][1]=a[1];
  d[1][2]=a[1]+a[2];
  d[2][2]=a[2];
  for(int j=3;j<=n;j++)
  {
    d[1][j]=a[j]+d[2][j-1];
    d[2][j]=a[j]+max(d[1][j-2],d[2][j-2]);
  }
  printf("%d",max(d[1][n],d[2][n]));
  return 0;
}
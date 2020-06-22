#include<stdio.h>
#include<algorithm>
using namespace std;

int n,m,a[100][100],d[100][1000];

int f(int end,int day){
  if(end==m) return 0;
  if(day==0) return 0;
  if(d[end][day]) return d[end][day];

  int res=f(end+1,day);
  for(int i=end;i<m;i++)
  {
    if(day-a[i][0]<0) continue;
    res=max(res,f(i+1,day-a[i][0])+a[i][1]);
  }
  d[end][day]=res;
  return res;
}

int main()
{
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++)
    scanf("%d %d",&a[i][0],&a[i][1]);
  int res=f(0,n);
  for(int i=0;i<m;i++)
  {
    if(res<d[i][n]) res=d[i][n];
  }
  printf("%d",res);
  return 0;
}
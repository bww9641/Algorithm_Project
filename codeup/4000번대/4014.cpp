#include<stdio.h>
#include<algorithm>
using namespace std;
struct st{
  int num,w,sum,k;
  char g;
};

bool comp(st a,st b)
{
  if(a.sum==b.sum) return a.k<b.k;
  else return a.sum>b.sum;
}
struct st a[105];
int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%3d%c%3d",&a[i].num,&a[i].g,&a[i].w);
    a[i].sum=4-(a[i].g-'A')+a[i].w;
    a[i].k=i;
  }
  for(i=0;i<n;i++)
  {
    sort(a,a+n,comp);
    printf("%3d%c%03d\n",a[0].num,a[0].g,a[0].w);
    for(j=1;j<n;j++)
    {
      if(a[0].k>a[j].k){
        a[j].w++;
        a[j].sum++;
      }
    }
    a[0].sum=-1000;
  }
  return 0;
}

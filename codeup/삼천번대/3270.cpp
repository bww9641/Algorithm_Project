#include<stdio.h>

int parent[1005];

int find(int x){
  if(parent[x]==x) return x;
  return parent[x]=find(parent[x]);
}

void uni(int x,int y){
  x=find(x);
  y=find(y);
  if(x>y)
  {
    int t=x;
    x=y;
    y=t;
  }
  parent[y]=x;
}

int main()
{
  int n,m,i,j,a,b;
  scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++) parent[i]=i;
  for(i=0;i<m;i++)
  {
    scanf("%d %d",&a,&b);
    uni(a,b);
  }
  for(i=1;i<=n;i++)
  {
    printf("%d ",find(i));
  }
  return 0;
}
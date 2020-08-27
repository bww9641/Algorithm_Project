//Top-Down
/*#include<stdio.h>
#include<algorithm>
#define MAX 100000
using namespace std;



int n,arr[2][MAX],d[MAX][3];

int sticker(int c, int status){
  if(c==n) return 0;
  if(d[c][status]!=-1) return d[c][status];

  int res=sticker(c+1,0);
  if(status!=1) res=max(res,sticker(c+1,1)+arr[0][c]);
  if(status!=2) res=max(res,sticker(c+1,2)+arr[1][c]);
  d[c][status]=res;
  return res;
}

int main()
{
  int T;
  scanf("%d",&T);
  for(int i=0;i<T;i++)
  {
    scanf("%d",&n);
    for(int j=0;j<2;j++)
    {
      for(int k=0;k<n;k++)
      {
        scanf("%d",&arr[j][k]);
      }
    }
    for(int j=0;j<n;j++)
    {
      for(int k=0;k<3;k++)
      {
        d[j][k]=-1;
      }
    }
    printf("%d\n",sticker(0,0));
  }
  return 0;
}*/
//Bottom-Up
#include<stdio.h>
#include<algorithm>
#define MAX 100001
using namespace std;

int main()
{
  int T,n;
  scanf("%d",&T);
  for(int i=0;i<T;i++)
  {
    int arr[2][MAX],d[MAX][3]={};//붙이고 나서 i번째 줄의 떼진 여부 j에 대한 최댓값
    scanf("%d",&n);
    for(int j=0;j<2;j++)
      for(int k=0;k<n;k++)
        scanf("%d",&arr[j][k]);
    for(int j=0;j<n;j++){
      d[j+1][0]=max(d[j+1][0],max(d[j][0],max(d[j][1],d[j][2])));
      d[j+1][1]=max(d[j+1][1],max(d[j][0],d[j][2])+arr[0][j]);
      d[j+1][2]=max(d[j+1][2],max(d[j][0],d[j][1])+arr[1][j]);
    }
    printf("%d\n",max(d[n][0],max(d[n][1],d[n][2])));
  }
}
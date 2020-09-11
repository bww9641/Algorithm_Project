#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int n,m;
int a[105][105];
int c[105][105];
int dy[5]={0,0,-1,1};
int dx[5]={-1,1,0,0};

int main(){
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%1d",&a[i][j]);
    }
  }
  queue<pair<int ,int> > q;
  q.push({0,0});
  c[0][0]=1;
  while(!q.empty()){
    int cy,cx;
    cy=q.front().first;
    cx=q.front().second;
    q.pop();
    if(cy==n-1&&cx==m-1) break;
    for(int i=0;i<4;i++){
      int ny,nx;
      ny=cy+dy[i];
      nx=cx+dx[i];
      if(a[ny][nx]&&!c[ny][nx]&&ny>=0&&ny<n&&nx>=0&&nx<m){
        c[ny][nx]=c[cy][cx]+1;
        q.push({ny,nx});
      }
    }
  }
  printf("%d",c[n-1][m-1]);
  return 0;
}
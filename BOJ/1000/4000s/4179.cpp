#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

struct st{
  int y,x,f;
};

int R,C,cy,cx;
char a[1005][1005];
int d[1005][1005];
int dx[5]={0,0,1,-1};
int dy[5]={1,-1,0,0};
queue<st> q;

void bfs(){
  q.push({cy,cx,0});
  d[cy][cx]=1;
  while(!q.empty()){
    int y=q.front().y,x=q.front().x,f=q.front().f;
    q.pop();
    for(int i=0;i<4;i++){
      int ny=y+dy[i];
      int nx=x+dx[i];
      if(ny<0||ny>=R||nx<0||nx>=C){
        if(f) continue;
        cout << d[y][x];
        return;
      }
      if(d[ny][nx] || a[ny][nx]=='#') continue;
      q.push({ny,nx,f});
      d[ny][nx]=d[y][x]+1;
    }
  }
  cout << "IMPOSSIBLE";
}

int main(){
  fastio;
  cin >> r >> c;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin >> a[i][j];
      if(a[i][j]=='J') cy=i,cx=j;
      if(a[i][j]=='F'){
        q.push({i,j,1});
        d[i][j]=1;
      }
    }
  }
  bfs();
  return 0;
}
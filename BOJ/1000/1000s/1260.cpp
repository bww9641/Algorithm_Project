#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int n,m,v;
int a,b,visit[1005],visit2[1005];
int adj[1005][1005];
queue<int> q;

void dfs(int k){
  cout << k << ' ';
  for(int i=1;i<=n;i++){
    if(!visit[i]&&adj[k][i]){
      visit[i]=1;
      dfs(i);
    }
  }
}

void bfs(){
  while(!q.empty()){
    int t=q.front();
    q.pop();
    cout << t << ' ';
    for(int i=1;i<=n;i++){
      if(!visit2[i]&&adj[t][i]){
        visit2[i]=1;
        q.push(i);
      }
    }
  }
}

int main(){
  fastio;
  cin >> n >> m >> v;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    adj[a][b]=1;
    adj[b][a]=1;
  }
  visit[v]=1;
  dfs(v);
  cout << '\n';
  visit2[v]=1;
  q.push(v);
  bfs();
  return 0;
}
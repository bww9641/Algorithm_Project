#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

struct st{
  int n,c;
  bool operator <(const st target)const{
    return target.c<c;
  }
};

int main(){
  fastio;
  int V,E,k,u,v,w,dist[20005];
  const int INF=1e9;
  vector<st> adj[20005];
  cin >> V >> E;
  cin >> k;
  fill(dist,dist+V+1,INF);
  for(int i=0;i<E;i++){
    cin >> u >> v >> w;
    adj[u].push_back({v,w});
  }
  
  //process
  priority_queue<st> pq;
  pq.push({k,0});
  dist[k]=0;
  while(!pq.empty()){
    int tn=pq.top().n,tc=pq.top().c;
    pq.pop();
    if(dist[tn]<tc) continue;
    for(auto x : adj[tn]){
      int nextn=x.n,nextc=x.c+tc;
      if(dist[nextn]>nextc){
        dist[nextn]=nextc;
        pq.push({nextn,nextc});
      }
    }
  }
  for(int i=1;i<=V;i++){
    if(dist[i]==INF) cout << "INF\n";
    else cout << dist[i] << '\n'; 
  }
  return 0;
}
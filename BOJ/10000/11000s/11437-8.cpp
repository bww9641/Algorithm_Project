#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define MAX_NODE 100005
using namespace std;
typedef pair<int, int> pii;

int dep[MAX_NODE];
int ac[MAX_NODE][20]; // 2^20
vector<int> graph[MAX_NODE];

int maxl;

void mtree(int h,int p){
  dep[h]=dep[p]+1;
  ac[h][0]=p;
  maxl=(int)floor(log2(MAX_NODE));
  for(int i=1;i<=maxl;i++){
    ac[h][i]=ac[ac[h][i-1]][i-1]; // h의 2^i번째 조상은 h의 2^(i-1)번째 조상의 2^(i-1)번째 조상임이 자명하다
  }

  //dfs
  int size=graph[h].size();
  for(int i=0;i<size;i++){
    if(graph[h][i]!=p)
      mtree(graph[h][i],h);
  }
}

int main(){
  fastio;
  int n,m;
  cin >> n;
  for(int i=0;i<n-1;i++){
    int from, to;
    cin >> from >> to;
    graph[from].push_back(to);
    graph[to].push_back(from);
  }
  dep[0]=-1;
  mtree(1,0);
  cin >> m;
  // step 1 : b를 a와 맞춘다
  while(m--){
    int a,b;
    cin >> a >> b;
    if(dep[a]!=dep[b]){
      if(dep[a]>dep[b])
        swap(a,b); // b를 처음에 a와 맞추려는 목적
      for(int i=maxl;i>=0;i--){
        if(dep[a]<=dep[ac[b][i]]) // b의 2^i번째 조상이 a 깊이보다 크거나 같으면 b를 b의 2^i번째 조상으로 이동시킨다
          b=ac[b][i];
      }
    }
    int ans=a; // 우선 a=b에서 될 수 있는 lca는 a or b
    if(a!=b){
      for(int i=maxl;i>=0;i--){
        if(ac[a][i]!=ac[b][i]){
          a=ac[a][i];
          b=ac[b][i];
        }
        ans=ac[a][i];
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
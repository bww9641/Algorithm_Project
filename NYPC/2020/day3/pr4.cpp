//메이플 월드 라이딩 여행
#include<bits/stdc++.h>
#include<unordered_map>
#define f first
#define v second
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

vector<pair<long long, long long> > a[100005];
vector<long long> ans;
unordered_map<pair<long long, long long>, long long> line_check;
long long n,m,k,s,vi,vj,val,visit[100005];

void dfs(long long idx, long long sum,long long cnt){
  if(cnt>n){
    cout << "check";
    return;
  }
  ans.push_back(sum);
  for(auto x : a[idx]){
    if(!visit[x.f] && !line_check[{idx,x.f}]){
      line_check[{idx,x.f}]=1;
      visit[x.f]=1;
      dfs(x.f,sum+x.v,cnt+1);
      line_check[{idx,x.f}]=0;
      visit[x.f]=0;
    }
  }
}

int main(){
  fastio;
  cin >> n >> m >> k >> s;
  for(int i=0;i<m;i++){
    cin >> vi >> vj >> val;
    a[vi].push_back({vj,val});
  }
  visit[s]=1;
  dfs(s,0,1);
  visit[s]=0;
  sort(ans.begin(),ans.end());
  /*for(int i=0;i<ans.size();i++){
    cout << ans[i] << ' ';
  }
  cout << '\n';*/
  if(ans.size()<k) cout << -1;
  else cout << ans[k-1];
}
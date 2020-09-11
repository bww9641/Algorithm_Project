//물풍선 아티스트
#include<bits/stdc++.h>
#define x first
#define y second
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;
typedef pair<int, int> pll;

int main(){
  long long n,plus;
  pll a[1000005];
  map<pll, long long> mp;
  vector<pair<pll,long long> > ans;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i].x >> a[i].y;
    mp[a[i]]=1;
  }
  for(int i=0;i<n;i++){
    plus=1;
    while(mp[{a[i].x-plus,a[i].y}]&&mp[{a[i].x+plus,a[i].y}]&&mp[{a[i].x,a[i].y-plus}]&&mp[{a[i].x,a[i].y+plus}]) plus++;
    if(plus>=2) ans.push_back({a[i],plus-1});
  }
  int size=ans.size();
  int t=n;
  for(int i=0;i<size;i++){
    if(mp[ans[i].x]) t--,mp[ans[i].x]=0;
    for(long long j=1;j<=ans[i].y;j++){
      if(mp[{ans[i].x.x-j,ans[i].x.y}]){
        t--;
        mp[{ans[i].x.x-j,ans[i].x.y}]=0;
      }
      if(mp[{ans[i].x.x+j,ans[i].x.y}]){
        t--;
        mp[{ans[i].x.x+j,ans[i].x.y}]=0;
      }
      if(mp[{ans[i].x.x,ans[i].x.y-j}]){
        t--;
        mp[{ans[i].x.x,ans[i].x.y-j}]=0;
      }
      if(mp[{ans[i].x.x,ans[i].x.y+j}]){
        t--;
        mp[{ans[i].x.x,ans[i].x.y+j}]=0;
      }
    }
  }
  if(t!=0) cout << -1;
  else{
    cout << ans.size() << '\n';
    for(auto k : ans){
      cout << k.x.x << ' ' << k.x.y << ' ' << k.y << '\n';
    }
  }
  return 0;
}
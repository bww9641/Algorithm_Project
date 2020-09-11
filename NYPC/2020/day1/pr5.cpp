#include<bits/stdc++.h>
#include<algorithm>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  vector<pair<int,int> > v;
  vector<int> ans;
  int n,k,a[10005]={},prev[1005]={},c[1005]={},sw;
  cin >> n >> k;
  for(int i=1;i<=k;i++){
    cin >> a[i];
    if(i==1) c[a[i]]=1;
  }
  for(int i=1;i<=k;i++){
    if(prev[a[i]]) v.push_back({prev[a[i]],i}),cout << prev[a[i]] << ' ' << i << '\n';
    prev[a[i]]=i;
  }
  sort(v.begin(),v.end());
  int size=v.size();
  for(int i=0;i<size;i++){
    sw=0;
    for(int j=i+1;j<size;j++){
      if(v[i].first==v[j].first || v[i].first==v[j].second || v[i].second==v[j].first || v[i].second==v[j].second)
        continue;  
      if(v[i].first<v[j].first && v[j].second < v[i].second) sw=1;
    }
    if(sw==0) c[a[v[i].first]]=1;
  }
  for(int i=1;i<=n;i++){
    if(c[i]) ans.push_back(i);
  }
  cout << ans.size() << '\n';
  for(auto x : ans){
    cout << x << ' ';
  }
  return 0;
}
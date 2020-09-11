#include<bits/stdc++.h>
#define start second
#define quit first
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n,s,e;
  vector<pair<int ,int> > v;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s >> e;
    v.push_back({e,s});
  }
  sort(v.begin(),v.end());
  int cnt=0,en=0;
  for(int i=0;i<n;i++){
    if(en<=v[i].start){
      en=v[i].quit;
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}
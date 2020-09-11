//우승자 찾기
#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b){
  if(a.first==b.first){
    return a.second<b.second;
  }
  return a.first<b.first;
}

int main(){
  fastio;
  int n,k,t,prev[1005]={},ansm,cnt=0;
  pair<int, int> Min[1005];
  vector<int> res;
  cin >> n;
  cin >> k;
  for(int i=0;i<=n;i++){
    prev[i]=1005;
    Min[i].first=1005;
  }
  for(int i=1;i<=n;i++){
    Min[i].second=i;
  }
  for(int i=1;i<=k;i++){
    cin >> t;
    if(i==1) prev[t]=1,Min[t].first=1;
    else if(prev[t]==1005) prev[t]=i;
    else if(i-prev[t]<Min[t].first) Min[t].first=i-prev[t],prev[t]=i;
  }

  sort(Min+1,Min+n+1,comp);

  for(int i=1;i<=n;i++){
    if(i==1){
      ansm=Min[i].first;
      cnt++;
      res.push_back(Min[i].second);
    }
    else if(ansm==Min[i].first){
      cnt++;
      res.push_back(Min[i].second);
    }
    else break;
  }
  sort(res.begin(),res.end());
  cout << cnt << '\n';
  for(int i=0;i<cnt;i++){
    cout << res[i] << ' ';
  }
  return 0;
}
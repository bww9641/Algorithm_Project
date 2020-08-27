#include<iostream>
#include<algorithm>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  vector<pair<int,int>> list;
  int n,k,w,v,dp[100005]={};
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> w >> v;
    list.push_back({w,v});
  }
  for(int i=0;i<n;i++){
    for(int j=k;j>=list[i].first;j--){
      dp[j]=max(dp[j],dp[j-list[i].first]+list[i].second);
    }
  }
  cout << dp[k];
  return 0;
}
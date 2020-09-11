#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int n,s,arr[105];
long long ans;
map<int, int> m; // 해당 sum -> ans ; m[sum]=ans

void dfs_1(int idx, int sum){
  if(idx==n/2){
    m[sum]++;
    return;
  }
  dfs_1(idx+1, sum);
  dfs_1(idx+1, sum + arr[idx]);
}

void dfs_2(int idx, int sum){
  if(idx==n){
    ans+=m[s-sum];
    return;
  }
  dfs_2(idx+1,sum);
  dfs_2(idx+1,sum+arr[idx]);
}

int main(){
  cin >> n >> s;
  for(int i=0;i<n;i++) cin >> arr[i];
  dfs_1(0,0);
  dfs_2(n/2,0);
  if(s==0) ans--;
  cout << ans;
}
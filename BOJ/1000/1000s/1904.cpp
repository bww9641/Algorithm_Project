#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n,dp[1000005][2]={};
  cin >> n;
  dp[1][1]=1;
  dp[2][0]=1;
  dp[2][1]=1;
  for(int i=3;i<=n;i++){
    dp[i][0]=(dp[i-2][0]+dp[i-2][1])%15746;
    dp[i][1]=(dp[i-1][0]+dp[i-1][1])%15746;
  }
  cout << (dp[n][0]+dp[n][1])%15746;
}
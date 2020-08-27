#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  long long dp[105]={},n,t;
  cin >> t;
  dp[0]=dp[1]=dp[2]=dp[3]=1;
  for(int i=4;i<=100;i++){
    dp[i]=dp[i-3]+dp[i-2];
  }
  while(t--){
    cin >> n;
    cout << dp[n] << '\n';
  }
  return 0;
}
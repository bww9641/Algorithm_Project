#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int dp[1005][1005];

int main(){
  stack<char> s;
  string a,b;
  cin >> a >> b;
  int s1=a.size();
  int s2=b.size();
  for(int i=1;i<=s1;i++){
    for(int j=1;j<=s2;j++){
      if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
      else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
    cout << '\n';
  }
  int y=s1,x=s2;
  while(y||x){
    if(dp[y][x-1]!=dp[y][x]){
      if(dp[y-1][x]==dp[y][x]) y--;
      else{
        if(dp[y-1][x-1]+1==dp[y][x]) s.push(a[y-1]);
        y--,x--;
      }
    }
    else x--;
  }
  cout << dp[s1][s2] << '\n';
  while(!s.empty()){
    cout << s.top();
    s.pop();
  }
}
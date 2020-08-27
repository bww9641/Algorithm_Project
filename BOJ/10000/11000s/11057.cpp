#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n,d[1005][10]={},ans=0;
  cin >> n;
  for(int i=0;i<10;i++)
    d[1][i]=1;
  for(int i=1;i<n;i++){
    for(int j=0;j<=9;j++){
        for(int k=j;k<=9;k++)
          d[i+1][k]=(d[i+1][k]+d[i][j])%10007;
    }
  }
  for(int i=0;i<10;i++) ans=(ans+d[n][i])%10007;
  cout << ans;
}
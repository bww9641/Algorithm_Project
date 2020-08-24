#include<iostream>
#define MOD 1000000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  //길이가 i이면서 j로 끝나는 경우 : d[i][j]
  //j==0 -> 1만 가능 -> +1
  //j==1~8-> -1, +1 가능 -> +2
  //j==9 -> 8만 가능 -> +1
  int n, d[105][10]={},ans=0;
  cin >> n;
  for(int j=1;j<=9;j++)
    d[1][j]=1;
  
  //process

  for(int i=1;i<=n-1;i++){
    for(int j=0;j<=9;j++){
      if(j!=0) d[i+1][j-1]=(d[i+1][j-1]+(d[i][j]%MOD))%MOD;
      if(j!=9) d[i+1][j+1]=(d[i+1][j+1]+(d[i][j]%MOD))%MOD;
    }
  }
  

  for(int i=0;i<=9;i++)
    ans=(ans+d[n][i])%MOD;
  cout << ans;
}
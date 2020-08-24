#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n,m,t,d[35][35]={};//nCr
  for(int i=1;i<=30;i++){
    d[i][0]=1;
    d[i][i]=1;
  }
  for(int i=0;i<=30;i++){
    for(int j=1;j<i;j++){
      d[i][j]=d[i-1][j-1]+d[i-1][j];
    }
  }
  cin >> t;
  while(t--){
    cin >> n >> m;
    cout << d[m][n] << '\n';
  }
}
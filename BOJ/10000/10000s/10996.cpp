#include<iostream>

#define fastio ios_base:sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int n;
  cin >> n;
  if(n==1){
    cout << '*';
    return 0;
  }
  for(int i=1;i<=2*n;i++){
    for(int j=1;j<=n;j++){
      if((i+j)%2) cout << ' ';
      else cout << '*';
    }
    cout << '\n';
  }
  return 0;
}
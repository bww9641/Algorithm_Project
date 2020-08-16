#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout << '*';
    }
    cout << '\n';
  }
  for(int i=n-1;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout << '*';
    }
    cout << '\n';
  }
}
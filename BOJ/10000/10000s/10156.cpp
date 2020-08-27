#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int n,k,m;
  cin >> n >> k >> m;
  if(n*k>m) cout << n*k-m;
  else cout << 0;
}
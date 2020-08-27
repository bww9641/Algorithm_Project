#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int a,b;
  cin >> a >> b;

  if(a>0&&b>0) cout << 1;
  else if(a<0&&b>0) cout << 2;
  else if(a<0&&b<0) cout << 3;
  else cout << 4;  
}
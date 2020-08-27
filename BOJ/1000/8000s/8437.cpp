#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int a,b;
  cin >> a >> b;
  cout << (a+b)/2 << '\n' << a-(a+b)/2;
  return 0;
}
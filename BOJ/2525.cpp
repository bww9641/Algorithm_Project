#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  b+=c;
  if(b>=60) a+=b/60,b-=(b/60)*60;
  if(a>=24) a-=(a/24)*24;
  cout << a << " " << b;
  return 0;
}
#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  c+=d;
  if(c>=60) b+=c/60,c-=(c/60)*60;
  if(b>=60) a+=b/60,b-=(b/60)*60;
  if(a>=24) a-=(a/24)*24;
  cout << a << " " << b << " " << c;
  return 0;
}
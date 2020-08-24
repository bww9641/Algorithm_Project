#include<iostream>
#include<algorithm>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a == b && b == c){
    cout << 10000+a*1000;
  }
  else if((a == b && b != c) || (a == c && b != a))
    cout << 1000+a*100;
  else if(b == c && a != b)
    cout << 1000+b*100;
  else cout << max(a,max(b,c))*100;
  return 0;
}
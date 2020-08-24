#include<iostream>
#include<algorithm>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int l,a,b,c,d,m,n;
  cin >> l >> a >> b >> c >> d;
  if(a%c==0) m=a/c;
  else m=a/c+1;
  if(b%d==0) n=b/d;
  else n=b/d+1;
  cout << l-max(m,n);
}
//S OR T
#include<iostream>
#include<string>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  string a;
  cin >> a;
  int size=a.size(),ans=0;
  for(int i=0;i<size;i++){
    if(a[i]=='S') ans++;
    else ans=(ans/4)*4+4;
  }
  cout << ans;
  return 0;
}
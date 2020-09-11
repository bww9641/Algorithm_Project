#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    string a;
    cin >> a;
    int len=a.size();
    if(len>10) cout << a[0] << len-2 << a[len-1] << '\n';
    else cout << a << '\n';
  }
}
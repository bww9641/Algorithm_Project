#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  long long t,x,y,k;
  long long tmp;
  cin >> t;
  while(t--){
    cin >> x >> y >> k;
    tmp=(long long)ceil((long double)((y+1)*k-1)/(x-1));
    cout << tmp+k << '\n';
  }
}
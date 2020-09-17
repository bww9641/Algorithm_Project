#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n;
  cin >> n;
  int ans=2;
  int cnt=1;
  for(int i=1;i<n;i++){
    if(i%2==1) cnt++;
    ans+=cnt;
  }
  cout << ans;
}
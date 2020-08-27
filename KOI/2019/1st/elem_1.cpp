#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  stack<int> s;
  int n,a[100005]={};
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=n-1;i>=0;i--){
    if(s.empty()) s.push(a[i]);
    else if(s.top()<a[i]) s.push(a[i]);
  }
  cout << s.size();
  return 0;
}
#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n;
  cin >> n;
  int a,b,c,cnt=0;
  for(int i=0;i<n;i++){
    cin >> a >> b >> c;
    int s=a+b+c;
    if(s>=2) cnt++;
  }
  cout << cnt;
  return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,k,cnt=0,Max=-1;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> k;
    if(k>Max) cnt=1,Max=k;
    else if(k==Max) cnt++;
  }
  cout << cnt;
  return 0;
}
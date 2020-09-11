#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int n,k,a[55]={};
  cin >> n >> k;
  int ans=k;
  for(int i=1;i<=n;i++){
    cin >> a[i];
    if(i<=k&&a[i]==0){
      ans=i-1;
      cout << ans;
      return 0;
    }
  }
  for(int i=k+1;i<=n;i++){
    if(a[k]==a[i]) ans++;
    else break;
  }
  cout << ans;
  return 0;
}
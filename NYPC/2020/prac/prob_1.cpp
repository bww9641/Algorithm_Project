//부분최대합
#include<iostream>
#include<algorithm>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

long long d[1000005],a[1000005];

int main(){
  fastio;
  long long ans,n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  d[0]=ans=a[0];
  for(int i=1;i<n;i++){
    d[i]=max(d[i-1]+a[i],a[i]);
    ans=max(ans,d[i]);
  }
  cout << ans;
  return 0;
}
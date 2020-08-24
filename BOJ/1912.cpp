#include<iostream>
#include<algorithm>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  long long d[100005]={},a[100005]={},n,ans;
  cin >> n;
  for(int i=0;i<n;i++)
    cin >> a[i];
  d[0]=ans=a[0];
  for(int i=1;i<n;i++){
    d[i]=max(d[i-1]+a[i],a[i]);
    ans=max(ans,d[i]);
  }
  cout << ans;
  return 0;
}
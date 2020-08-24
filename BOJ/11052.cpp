#include<iostream>
#include<algorithm>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int a[1005]={},d[1005]={},n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      d[i]=max(d[i],d[i-j]+a[j]);
    }
  }
  cout << d[n];
}
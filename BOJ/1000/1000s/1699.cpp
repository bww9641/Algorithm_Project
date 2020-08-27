#include<iostream>
#include<algorithm>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n,d[100005]={};
  cin >> n;
  d[1]=1;
  for(int i=1;i<=n;i++) d[i]=i;
  for(int i=2;i<=n;i++){
    for(int j=2;j*j<=i;j++){
      d[i]=min(d[i-j*j]+1,d[i]);
    }
  }
  cout << d[n];
}
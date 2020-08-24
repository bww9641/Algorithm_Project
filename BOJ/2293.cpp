#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n,k,a[105]={},d[10005]={};//d[i] : i만큼 가치의 합이 있을 때 경우의 수
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  d[0]=1;
  for(int i=0;i<n;i++){
    for(int j=1;j<=k;j++){
      if(j-a[i]>=0)
        d[j]+=d[j-a[i]];
    }
  }
  cout << d[k];
  return 0;
}
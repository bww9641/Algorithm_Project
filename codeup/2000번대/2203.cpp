#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  long long n,t,sw;
  vector<long long> v;
  cin >> n;
  for(long long i=1;i*i<=n;i++){
    if(n%i==0){
      t=n/i;
      sw=0;
      for(long long j=2;j*j<=t;j++){
        if(t%j==0){
          sw=1;
          break;
        }
      }
      if(sw==0) v.push_back(t);
      t=i;
      sw=0;
      if(t==1) continue;
      for(long long j=2;j*j<=t;j++){
        if(t%j==0){
          sw=1;
          break;
        }
      }
      if(sw==0) v.push_back(t);
    }
  }
  sort(v.begin(),v.end(),greater<long long>());
  cout << v[0];
  return 0;
}
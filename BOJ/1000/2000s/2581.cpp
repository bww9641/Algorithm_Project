#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n;
  int prime[300005]={};
  prime[1]=1;
  for(int i=2;i*i<=300000;i++){
    if(prime[i]==0){
      for(int j=2*i;j<=300000;j+=i){
        prime[j]=1;
      }
    }
  }
  int cnt,sw=0;
  while(1){
    cin >> n;
    if(n==0) break;
    cnt=0;
    for(int i=n+1;i<=2*n;i++){
      if(prime[i]==0){
        cnt++;
      }
    }
    cout << cnt << '\n';
  }
}
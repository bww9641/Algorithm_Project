#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int t,p,n,d[20]={};
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> t >> p;
    if(d[i+1]<d[i]) d[i+1]=d[i];
    if(d[t+i]<d[i]+p) d[t+i]=d[i]+p;
  }
  cout << d[n];
}
#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  //d[i]=d[i-1]+d[i-2]*2
  int d[1005]={},n;
  cin >> n;
  d[1]=1;
  d[2]=3;
  for(int i=3;i<=n;i++)
    d[i]=(d[i-1]+d[i-2]*2)%10007;
  cout << d[n];
}
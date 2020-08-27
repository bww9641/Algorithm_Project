#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int n,cnt=1,ans=0;
  cin >> n;
  while(n>0){
    if(n<cnt) cnt=1;
    n-=cnt;
    ans++;
    cnt++;
  }
  cout << ans;
}
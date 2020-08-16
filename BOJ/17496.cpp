#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int n,t,c,p,current=1,ans=0;
  cin >> n >> t >> c >> p;
  //1일 ~ n일이 여름, 1+t <=n이어야 수확 가능 c에 모두 채움.
  while(current<=n){
    if(current!=1) ans+=c*p;
    current+=t;
  }
  cout << ans;
}
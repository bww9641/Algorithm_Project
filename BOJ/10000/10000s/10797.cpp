#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int d,k,cnt=0;
  cin >> d;
  for(int i=0;i<5;i++){
    cin >> k;
    cnt+=k%10==d;
  }
  cout << cnt;
}
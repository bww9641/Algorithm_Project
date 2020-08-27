#include<iostream>
#include<cmath>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int n,r,c,cnt=0;;

void f(int y, int x, int k){
  if(y==r && x==c){
    cout << cnt;
    return;
  }

  if(x<=c && c<x+k && y<=r && r<y+k){
    f(y,x,k/2);
    f(y,x+k/2,k/2);
    f(y+k/2,x,k/2);
    f(y+k/2,x+k/2,k/2);
  }
  else{
    cnt+=k*k;
  }
}

int main(){
  cin >> n >> r >> c;
  n=pow(2,n);
  f(0,0,n);
  return 0;
}
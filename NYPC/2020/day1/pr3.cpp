//스피드전 할까 아이템전 할까
#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int a[5]={},b[5]={},n,asum,bsum,amax,bmax;
  cin >> n;
  for(int i=0;i<n;i++){
    asum=bsum=amax=bmax=0;
    for(int j=0;j<4;j++){
      cin >> a[j];
      asum+=a[j];
      if(amax<a[j]) amax=a[j];
    }
    for(int j=0;j<4;j++){
      cin >> b[j];
      bsum+=b[j];
      if(bmax<b[j]) bmax=b[j];
    }
    if(asum>bsum && amax<=bmax) cout << "S\n";
    else if(amax>bmax && asum<=bsum) cout << "I\n";
    else cout << "R\n";
  }
  return 0;
}
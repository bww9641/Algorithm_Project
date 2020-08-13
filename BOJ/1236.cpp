#include<iostream>
#include<algorithm>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int a[55]={};
  int b[55]={};
  int n,m,p=0,q=0;
  char k;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> k;
      if(k=='X' && !a[i]) p++,a[i]=1;
      if(k=='X' && !b[j]) q++,b[j]=1;
    }
  }
  cout << max(n-p,m-q);
  return 0;
}
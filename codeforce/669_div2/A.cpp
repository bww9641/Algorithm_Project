#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int check[1005]={};
  int t,n,k,odd,even;
  cin >> t;
  while(t--){
    vector<int> a;
    cin >> n;
    int tmp=n;
    odd=even=0;
    for(int i=0;i<n;i++){
      cin >> k;
      if(i%2) odd+=k;
      else even+=k;
      a.push_back(k);
    }
    if(even>odd){
      int off=even-odd;
      for(int i=0;i<n;i+=2){
        if(off==0) break;
        if(a[i]) check[i]=1,off--,tmp--;
      }
      if(off%2==1){
        off=even-odd;
        for(int i=1;i<n;i+=2){
          if(off==0) break;
          if(!a[i]) check[i]=1,off--,tmp--;
        }
      }
    }
    else if(even<odd){
      int off=odd-even;
      for(int i=1;i<n;i+=2){
        if(off==0) break;
        if(a[i]) check[i]=1,off--,tmp--;
      }
      if(off%2==1){
        int off=odd-even;
        for(int i=0;i<n;i+=2){
          if(off==0) break;
          if(!a[i]) check[i]=1,off--,tmp--;
      }
      }
    }
    cout << tmp << '\n';
    for(int i=0;i<n;i++){
      if(!check[i]) cout << a[i] << ' ';
      else check[i]=0;
    }
    cout << '\n';
  }
}
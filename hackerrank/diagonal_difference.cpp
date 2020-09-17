#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int n,k,s1,s2;

int main(){
  fastio;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> k;
      if(i==j) s1+=k;
      if(i+j==n-1) s2+=k;
    }
  }
  cout << abs(s1-s2);
  return 0;
}
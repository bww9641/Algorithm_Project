#include<iostream>
#include<vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int n,cnt1=0,cnt2=0;
  vector<int> v;
  cin >> n;
  v.resize(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(v[j]>=v[i]){
        cnt1++;
        break;
      } 
    }
  }
  for(int i=n-1;i>=0;i--){
    for(int j=i+1;j<n;j++){
      if(v[j]>=v[i]){
        cnt2++;
        break;
      } 
    }
  }
  cout << n-cnt1 << '\n' << n-cnt2;
  return 0;
}
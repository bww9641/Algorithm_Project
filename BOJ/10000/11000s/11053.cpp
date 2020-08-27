#include<iostream>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int n,k;
  cin >> n;
  vector<int> v;
  v.push_back(-1);
  for(int i=0;i<n;i++){
    cin >> k;
    if(v.back()<k){
      v.push_back(k);
    }
    else{
      auto it=lower_bound(v.begin(),v.end(),k);
      *it=k;
    }
  }
  cout << v.size()-1;
  return 0;
}
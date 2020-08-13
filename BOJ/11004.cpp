#include<iostream>
#include<algorithm>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  vector<int> v;
  int n,k,t;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(),v.end());
  cout << v[k-1];
}
#include<iostream>
#include<algorithm>
#include<vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  vector<int> v;
  int n,m,k;
  cin >> n;
  v.resize(n);
  while(n--){
    cin >> v[n];
  }
  sort(v.begin(),v.end());
  cin >> m;
  while(m--){
    cin >> k;
    cout << binary_search(v.begin(),v.end(), k) << '\n';
  }
  return 0;
}
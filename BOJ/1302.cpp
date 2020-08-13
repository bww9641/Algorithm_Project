#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  vector<string> v;
  string k;
  string ans;
  int n,maax=0,cnt=1;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> k;
    v.push_back(k);
  }
  sort(v.begin(),v.end());
  for(int i=1;i<n+1;i++){
    if(v[i]==v[i-1] && i!=n) cnt++;
    else{
      if(maax<cnt) maax=cnt,ans=v[i-1];
      cnt=1;
    }
  }
  cout << ans;
}
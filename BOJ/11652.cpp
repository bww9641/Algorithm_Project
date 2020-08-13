#include<iostream>
#include<algorithm>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  vector<long long> v;
  long long n,k,t,cnt=1,max=0,num=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(),v.end());
  for(int i=1;i<n+1;i++){
    if(v[i]==v[i-1] && i!=n) cnt++;
    else {
      if(cnt>max) max=cnt,num=v[i-1];
      cnt=1; 
    }
  }
  cout << num;
}
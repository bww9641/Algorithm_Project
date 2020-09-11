#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;
typedef pair<long long, long long> pll;

long long x,r,n,t;
pll a[100005];

pll f(long long t){
  long long ret=0;
  long long low, high;
  high=low=a[0].first+t*a[0].second;
  for(int i=1;i<n;i++){
    low=min(low,a[i].first+t*a[i].second);
    high=max(high,a[i].first+t*a[i].second);
  }
  long long k;
  k=high-low;
  return {high,low};
}

int main(){
  cin >> x >> r;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i].first >> a[i].second;
  }
  long long low=0;
  long long high=3e9+1;
  while(high-low>=3){
    long long a1=(low*2+high)/3;
    long long b=(low+2*high)/3;
    pll p=f(a1);
    pll q=f(b);
    if(0<=p.first-p.second && p.first-p.second<=r && 0<=p.second && p.first <= x+r){
      cout << 'T';
      return 0;
    }
    if(0<=q.first-q.second && q.first-q.second<=r && 0<=q.second && q.first <= x+r){
      cout << 'T';
      return 0;
    }
    if(p.first-p.second<=q.first-q.second){
      high = b;
    }
    else{
      low=a1;
    }
  }
  for(int i=low;i<=high;i++){
    pll q=f(i);
    if(0<=q.first-q.second && q.first-q.second<=r && 0<=q.second && q.first <= x+r){
      cout << 'T';
      return 0;
    }
  }
  cout << 'F';
  return 0;
}
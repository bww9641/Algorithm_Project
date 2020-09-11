//몰이 사냥
#include<bits/stdc++.h>

using namespace std;

typedef pair<long long, long long> pll;

long long x,r,n,t,c[100005],temp_min,temp_max;
pll a[100005];

bool comp(pll &a, pll &b){
  return a.first+t*a.second<b.first+t*b.second;
}

int main(){
  cin >> x >> r;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i].first >> a[i].second;
  }
  for(t=0;t<=10000;t++){
    temp_min=distance(a,min_element(a,a+n,comp));
    //cout << "temp_min : " << temp_min << '\n';
    temp_max=distance(a,max_element(a,a+n,comp));
    //cout << "temp_max : " << temp_max << '\n';
    //cout << "1: " << a[temp_max].first+t*a[temp_max].second << " 2: " << a[temp_min].first+t*a[temp_min].second << '\n';
    if((a[temp_max].first+t*a[temp_max].second)-(a[temp_min].first+t*a[temp_min].second) <=r && a[temp_min].first+t*a[temp_min].second>=0 && a[temp_max].first+t*a[temp_max].second<=x+r){
      printf("T");
      return 0;
    }
    else if((a[temp_min].first+t*a[temp_min].second<0 && a[temp_min].second<=0) || (a[temp_max].first+t*a[temp_max].second>x+r && a[temp_max].second>=0)){
      printf("F");
      return 0;
    }
  }
  printf("F");
  return 0;
}
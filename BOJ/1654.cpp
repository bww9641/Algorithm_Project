/* #include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int k,n,leng=0;
  int a[10005]={};
  cin >> k >> n;
  for(int i=0;i<k;i++){
    cin >> a[i];
  }
  for(int i=1;;i++){
    leng=0;
    for(int j=0;j<k;j++){
      leng+=a[j]/i;
    }
    if(leng==n-1){
      cout << i-1;
      return 0;
    }
  }
} */

#include<iostream>
#include<algorithm>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  long long k,n,t;
  vector<long long> a;
  cin >> k >> n;
  for(int i=0;i<k;i++){
    cin >> t;
    a.push_back(t);
  }
  sort(a.begin(),a.end());
  long long s,e,m,cnt,max=0;
  s=0;
  e=__LONG_LONG_MAX__;
  while(s<=e){
    long long m=(s+e)/2;
    cnt=0;
    for(int i=0;i<k;i++){
      cnt+=a[i]/m;
    }
    if(cnt>=n){
      s=m+1;
      if(m>max) max=m;
    }
    else{
      e=m-1;
    }
  }
  cout << max;
}
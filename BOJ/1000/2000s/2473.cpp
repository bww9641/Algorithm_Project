#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  long long n;
  long long a[5005]={};
  long long Min=3*1e9+10;
  long long ans[4]={};
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n;i++){
    int j=i+1,k=n-1;
    while(j<k){
      long long s=a[i]+a[j]+a[k];
      if(Min>abs(s)){
        Min=abs(s);
        ans[0]=a[i];
        ans[1]=a[j];
        ans[2]=a[k];
      }
      if(s>0) k--;
      else j++;
    }
  }
  for(int i=0;i<3;i++){
    cout << ans[i] << ' ';
  }
  return 0;
}
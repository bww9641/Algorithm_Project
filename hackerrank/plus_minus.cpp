#include<bits/stdc++.h>

using namespace std;

int s1,s2,s3;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n,k;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> k;
    if(k>0) s1++;
    else if(k==0) s2++;
    else s3++;
  }
  cout << fixed;
  cout << (double)s1/n << '\n' << (double)s3/n << '\n' << (double)s2/n;
  return 0;
}
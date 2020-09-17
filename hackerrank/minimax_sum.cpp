#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long long arr[6]={},sum=0;
  for(int i=0;i<5;i++){
    cin >> arr[i];
    sum+=arr[i];
  }
  sort(arr,arr+5);
  cout << sum-arr[4] << ' ' << sum-arr[0];
  return 0;
}
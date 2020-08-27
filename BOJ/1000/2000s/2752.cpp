#include<iostream>
#include<algorithm>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int a[3];
  for(int i=0;i<3;i++){
    cin >> a[i];
  }
  sort(a,a+3);
  for(int i=0;i<3;i++){
    cout << a[i] << ' ';
  }
  return 0;
}
#include<iostream>
#include<cmath>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int n,k;
  cin >> n;
  for(int i=0;;i++){
    
    k=pow((i+1)*(i+1)-i,i);
    if(k==n){
      cout << i;
      return 0;
    }
  }
}
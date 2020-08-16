#include<iostream>
#include<cmath>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  float a,b,c;
  cin >> a >> b >> c;
  cout << floor((a+1)*(b+1)/(c+1)-1);
  return 0;
}
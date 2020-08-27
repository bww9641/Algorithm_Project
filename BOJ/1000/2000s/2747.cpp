#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int d[55]={};

int f(int a){
  if(d[a]) return d[a];
  if(a==0) return 0;
  if(a==1) return 1;
  return d[a]=f(a-1)+f(a-2);
}

int main(){
  fastio;
  int n;
  cin >> n;
  cout << f(n);
  return 0;
}
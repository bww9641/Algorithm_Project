#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

long long d[100]={};

long long f(int a){
  if(d[a]) return d[a];
  if(a==0) return 0;
  if(a==1) return 1;
  return d[a]=f(a-1)+f(a-2);
}

int main(){
  fastio;
  long long n;
  cin >> n;
  cout << f(n);
  return 0;
}
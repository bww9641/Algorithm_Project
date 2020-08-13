#include<iostream>
#include<queue>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  string a,b;
  int cnt=0;
  getline(cin,a);
  getline(cin,b);
  auto k=a.find(b);
  while(k!=string::npos){
    cnt++;
    k=a.find(b,k+b.size());
  }
  cout << cnt;
}
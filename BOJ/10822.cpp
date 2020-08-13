#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  int cnt=0;
  while(getline(cin, s, ',')){
    cnt+=stoi(s);
  }
  cout << cnt << "\n";
  return 0;
}
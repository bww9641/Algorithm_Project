#include<iostream>
#include<string>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  string s;
  int sum=0;
  cin >> s;
  for(int i=0;s[i]>='0';i++){
    sum=(sum*10+s[i]-'0')%20000303;
  }
  cout << sum;
  return 0;
}
#include<iostream>
#include<stack>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main() {
  fastio;
  string a;
  stack<int> s;
  int ans=0;
  cin >> a;
  int size=a.size();
  for(int i=0;i<size;i++){
    if(a[i]=='('){
      s.push(i);
    }
    else{
      if(a[i-1]=='('){
        s.pop();
        ans+=s.size();
      }
      else ans++,s.pop();
    }
  }
  cout << ans;
}
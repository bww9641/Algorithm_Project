#include<iostream>
#include<stack>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  stack<int> s;
  string k;
  int n,idx;
  cin >> n;
  while(n--){
    cin >> k;
    if(k == "push"){
      cin >> idx;
      s.push(idx);
    }
    if(k == "pop"){
      if(!s.empty()){
        cout << s.top() << "\n";
        s.pop();
      }
      else cout << "-1" << "\n";
    }
    if(k == "size"){
      cout << s.size() << "\n";
    }
    if(k == "empty"){
      if(s.empty()) cout << "1" << "\n";
      else cout << "0" << "\n";
    }
    if(k == "top"){
      if(s.empty()) cout << "-1" << "\n";
      else cout << s.top() << "\n";
    }
  }
  return 0;
}
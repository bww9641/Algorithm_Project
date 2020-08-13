#include<iostream>
#include<queue>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main() {
  fastio;
  queue<int> q;
  int n,k;
  cin >> n;
  while(n--){
    string a;
    cin >> a;
    if(a == "push"){
      cin >> k;
      q.push(k);
    }
    if(a == "front"){
      if(q.empty()) cout << -1 << "\n";
      else cout << q.front() << "\n";
    }
    if(a == "back"){
      if(q.empty()) cout << -1 << "\n";
      else cout << q.back() << "\n";
    }
    if(a == "pop"){
      if(q.empty()) cout << -1 << "\n";
      else cout << q.front() << "\n",q.pop();
    }
    if(a == "size"){
      if(q.empty()) cout << 0 << "\n";
      else cout << q.size() << "\n";
    }
    if(a == "empty"){
      if(q.empty()) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
  }
  return 0;
}
#include<iostream>
#include<queue>

#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  deque<int> dq;
  int n,k,t;
  string a;
  cin >> n;
  while(n--){
    cin >> a;
    if(a=="push_back"){
      cin >> k;
      dq.push_back(k);
    }
    if(a=="push_front"){
      cin >> k;
      dq.push_front(k);
    }
    if(a=="pop_front"){
      if(dq.empty()) cout << -1 << '\n';
      else{
        t=dq.front();
        cout << t << '\n';
        dq.pop_front();
      }
    }
    if(a=="pop_back"){
      if(dq.empty()) cout << -1 << '\n';
      else{
        t=dq.back();
        cout << t << '\n';
        dq.pop_back();
      }
    }
    if(a=="size"){
      cout << dq.size() << '\n';
    }
    if(a=="empty"){
      cout << dq.empty() << '\n';
    }
    if(a=="front"){
      if(dq.empty()) cout << -1 << '\n';
      else cout << dq.front() << '\n';
    }
    if(a=="back"){
      if(dq.empty()) cout << -1 << '\n';
      else cout << dq.back() << '\n';
    }
  }
  return 0;
}
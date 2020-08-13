#include<iostream>
#include<stack>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int T,size,sw;
  string k;
  cin >> T;
  while(T--){
    stack<char> s;
    sw=0;
    cin >> k;
    size=k.size();
    for(int i=0;i<size;i++){
      if(k.at(i)=='(')
        s.push('(');
      else {
        if(!s.empty()){
          if(s.top()=='(')
            s.pop();
        }
        else {
          sw=1;
          break;
        }
      }
    }
    if(!s.empty() || sw==1) cout << "NO" << "\n";
    else cout << "YES" << "\n";
  }
  return 0;
}
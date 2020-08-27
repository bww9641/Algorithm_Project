#include<iostream>
#include<algorithm>
#include<stack>
#include<string>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main()
{
  fastio;
  int T;
  cin >> T;
  while(T--){
    stack<char> t;
    stack<char> ans;
    string a;
    string res;
    cin >> a;
    for(int i=0;i<a.size();i++)
    {
      if(a.at(i)=='<'){
        if(!ans.empty()){
          t.push(ans.top());
          ans.pop();
        }
      }
      else if(a.at(i)=='>'){
        if(!t.empty()){
          ans.push(t.top());
          t.pop();
        }
      }
      else if(a.at(i)=='-'){
        if(!ans.empty())
          ans.pop();
      }
      else{
        ans.push(a.at(i));
      }
    }
    while(!t.empty()){
      ans.push(t.top());
      t.pop();
    }
    while(!ans.empty()){
      res+=ans.top();
      ans.pop();
    }
    reverse(res.begin(),res.end());
    cout << res << "\n";
  }
  return 0;
}
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
  stack<char> t;
  stack<char> ans;
  string a,k,temp,r;
  string res;
  cin >> res;
  int size=res.size();
  for(int i=0;i<size;i++){
    ans.push(res[i]);
  }
  cin >> T;
  while(T--)
  {
    cin >> k;
    if(k=="L"){
      if(!ans.empty()){
        t.push(ans.top());
        ans.pop();
      }
    }
    else if(k=="D"){
      if(!t.empty()){
        ans.push(t.top());
        t.pop();
      }
    }
    else if(k=="B"){
      if(!ans.empty())
        ans.pop();
    }
    else{
      cin >> temp;
      ans.push(temp.at(0));
    }
  }
  while(!t.empty()){
    ans.push(t.top());
    t.pop();
  }
  while(!ans.empty()){
    r+=ans.top();
    ans.pop();
  }
  reverse(r.begin(),r.end());
  cout << r << "\n";
  return 0;
}
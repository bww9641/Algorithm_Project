#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int s1,s2,t1=0,t2=0,upp=0;
  string a,b,ans;
  cin >> a >> b;
  s1=a.length(),s2=b.length();
  while(s1 || s2 || upp){
    if(s1) t1=a[(s1--)-1]-'0';
    if(s2) t2=b[(s2--)-1]-'0';
    ans+=(t1+t2+upp)%10+'0';
    upp=t1+t2+upp>9?1:0;
    t1=t2=0;
  }
  reverse(ans.begin(),ans.end());
  cout << ans;
  return 0;
}
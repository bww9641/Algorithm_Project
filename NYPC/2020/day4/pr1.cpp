//덕분에 챌린지
#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  queue<pair<int , int> > q; // second -> 0: n, 1: m
  int n,m,x,y,t,Max=0,c[3]={},mode,curr;
  cin >> n >> m >> x >> y;
  if(x>=y && m>0) t=x,x=y,y=t,t=n,n=m,m=t;
  n--,c[0]=1;
  q.push({x,0});
  while(!q.empty()){
    curr=q.front().first;
    mode=q.front().second;
    cout << curr << ' ' << mode << '\n';
    Max=curr>Max?curr:Max;
    q.pop();
    if(mode==-1) continue;
    if(mode==0){
      if(c[0]*2==m && c[1]==n && m>=2){
        m-=2,q.push({curr+y,-1}),q.push({curr+y,-1});
      }
      else if(n>0 && m>0) {
        n--,m--;
        c[0]++,c[1]++;
        q.push({curr+x,0}),q.push({curr+y,1});
      }
      else if(n>=2 && m==0){
        n-=2;
        c[0]+=2;
        q.push({curr+x,0});
        q.push({curr+x,0});        
      }
      else if(n==0 && m>=2){
        m-=2;
        c[1]+=2;
        q.push({curr+y,1});
        q.push({curr+y,1});        
      }
      else if(n>0){
        n--;
        c[0]++;
        q.push({curr+x,0});
      }
      else if(m>0){
        m--;
        c[1]++;
        q.push({curr+y,1});
      }
    }
    else{
      if(c[0]*2==m && c[1]==n && n>=2){
        n-=2,q.push({curr+x,-1}),q.push({curr+x,-1});
      }
      else if(n>0 && m>0) {
        n--,m--;
        c[0]++,c[1]++;
        q.push({curr+x,0}),q.push({curr+y,1});
      }
      else if(n>=2 && m==0){
        n-=2;
        c[0]+=2;
        q.push({curr+x,0});
        q.push({curr+x,0});        
      }
      else if(n==0 && m>=2){
        m-=2;
        c[1]+=2;
        q.push({curr+y,1});
        q.push({curr+y,1});        
      }
      else if(n>0){
        n--;
        c[0]++;
        q.push({curr+x,0});
      }
      else if(m>0){
        m--;
        c[1]++;
        q.push({curr+y,1});
      }
    }
    c[mode]--;
  }
  cout << Max;
  return 0;
}
#include<iostream>
#include<queue>
#include<stack>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

struct member{
  long long id, out, cash;
  bool operator<(member next) const{
    if(out==next.out){
      return cash<next.cash;
    }
    else return out>next.out;
  }
};

int main(){
  fastio;
  stack<long long> st;
  priority_queue<member> pq;
  long long n,k,id,o,time=0,cnt=1,ans=0,ct;
  cin >> n >> k;
  for(int i=0;i<k;i++){
    st.push(k-i-1);
  }
  for(int i=0;i<n;i++){
    cin >> id >> o;
    if(pq.size()<k){
      pq.push({id,time + o,st.top()});
      st.pop();
    }
    else{
      time=pq.top().out;
      while(!pq.empty() && pq.top().out==time){
        ans+=pq.top().id*cnt++;
        st.push(pq.top().cash);
        pq.pop();
      }
      pq.push({id,o+time,st.top()});
      st.pop();
    }
  }
  while(!pq.empty()){
    ans+=pq.top().id*cnt++;
    pq.pop();
  }
  cout << ans;
}
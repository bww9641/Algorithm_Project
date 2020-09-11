//실력별 매칭
#include<iostream>
#include<cmath>
#include<queue>
#include<map>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

map<pair<int, int>, int> m;

priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

int main(){
  fastio;
  int n,s,k,t;
  cin >> n;
  cin >> s >> k;
  for(int i=0;i<n;i++){
    cin >> t;
    pq.push({abs(s-t),t});
    m[{abs(s-t),t}]=i+1;
  }
  for(int i=0;i<k;i++){
    cout << m[pq.top()] << ' ';
    pq.pop();
  }
  return 0;
}
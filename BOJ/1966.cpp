#include<iostream>
#include<utility>
#include<queue>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main()
{
  fastio;
  int T,n,m,k,cnt,f,s;
  cin >> T;
  for(int i=0;i<T;i++){
    queue<pair<int, int> > q;
    priority_queue<int> pq;
    cin >> n >> m;
    for(int j=0;j<n;j++){
      cin >> k;
      q.push({k,j});
      pq.push(k);
    }
    cnt=0;
    while(q.size()){
      f=q.front().first;
      s=q.front().second;
      q.pop();
      if(pq.top()==f)
      {
        ++cnt;
        pq.pop();
        if(s == m)
        {
          break;
        }
      }
      else q.push({f,s});
    }
    printf("%d\n",cnt);
  }
  return 0;
}
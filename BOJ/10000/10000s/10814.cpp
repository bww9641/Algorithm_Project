#include<iostream>
#include<string>
#include<queue>
#include<functional>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  priority_queue<pair<int,int> , vector<pair<int,int> >, greater<pair<int,int> > > pq;
  string name[100005];
  int n,age;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> age;
    cin >> name[i];
    pq.push({age,i});
  }
  while(!pq.empty())
  {
    cout << pq.top().first << " " << name[pq.top().second] << "\n";
    pq.pop();
  }
}
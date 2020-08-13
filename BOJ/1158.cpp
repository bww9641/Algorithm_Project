#include<iostream>
#include<queue>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  queue<int> q;
  int n,k,cnt=1,front;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    q.push(i+1);
  }
  cout << "<";
  while(1){
    if(q.size()==1){
      cout << q.front() << ">";
      return 0;
    }
    else{
      if(cnt==k){
        front=q.front();
        cout << q.front() << ", ";
        q.pop();
        cnt=1;
      }
      else{
        front=q.front();
        q.pop();
        q.push(front);
        cnt++;
      }
    }
  }
}
//좋은 카트 만들기
#include<bits/stdc++.h>
#define s first
#define w second
using namespace std;

int main(){
  long long n,m,ans;
  pair<int, int> engine[3005];
  pair<int, int> handle[3005];
  cin >> n >> m;
  for(int i=0;i<n;i++){
    cin >> engine[i].s >> engine[i].w;
  }
  for(int i=0;i<m;i++){
    cin >> handle[i].s >> handle[i].w;
  }
  for(int i=0;i<n;i++){
    ans=0;
    for(int j=0;j<m;j++){
      if((engine[i].s+handle[j].s)*(engine[i].w+handle[ans].w)>(engine[i].s+handle[ans].s)*(engine[i].w+handle[j].w))
        ans=j;
    }
    cout << ans+1 << '\n';
  }
  return 0;
}
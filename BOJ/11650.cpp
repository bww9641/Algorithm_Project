#include<stdio.h>
#include<algorithm>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  vector<pair<int,int> > v;
  int n,a,b;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    v.push_back({a,b});
  }
  sort(v.begin(),v.end());
  for(auto x : v){
    printf("%d %d\n",x.first,x.second);
  }
}
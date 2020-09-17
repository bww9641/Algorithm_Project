#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;
typedef long long ll;
ll n,cnt;
ll a[100005];
ll tree[4*100005];
ll ans[4*100005];

void init(ll start, ll end, ll node){
  if(start==end){
    tree[node]=start;
    return ;
  }
  ll mid=(start+end)/2;
  init(start, mid, node*2);
  init(mid+1, end, node*2+1);
  if(a[tree[node*2]]<=a[tree[node*2+1]]){
    tree[node]=tree[node*2];
  }
  else tree[node]=tree[node*2+1];
}

ll Mintree(ll start, ll end, ll node, ll left, ll right){
  if(left > end || right < start) return -1;
  if(left <= start && end <= right) return tree[node];
  ll mid=(start+end)/2;
  ll p=Mintree(start, mid, node*2, left, right);
  ll q=Mintree(mid+1, end, node*2+1, left, right);
  if(p==-1) return q;
  if(q==-1) return p;
  if(a[p]<=a[q]) return p;
  else return q;
  
}

ll Get_Max(ll start ,ll end){
  ll m=Mintree(1,n,1,start,end);
  ll area=(end-start+1)*a[m];
  if(start<=m-1){
    ll t=Get_Max(start, m-1);
    if(area<t)
      area=t;
  }
  if(m+1<=end){
    ll t=Get_Max(m+1, end);
    if(area<t)
      area=t;
  }
  return area;
}

int main(){
  fastio;
  while(1){
    cin >> n;
    if(n==0) break;
    for(int i=1;i<=n;i++){
      cin >> a[i];
    }
    init(1,n,1);
    cout << Get_Max(1,n) << '\n';
  }
  return 0;
}
#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

long long a[1000005];
long long tree[4*1000005];
long long lazy[4*1000005];

//start, end는 세그먼트 트리 범위
long long init(int start, int end, int node){
  if(start == end) return tree[node]=a[start];
  int mid=(start+end)/2;
  return tree[node]=init(start,mid,node*2)+init(mid+1,end,node*2+1);
}

void update_lazy(int node, int start, int end){
  if(lazy[node]){
    tree[node]+=(end-start+1)*lazy[node];
    if(start!=end){
      lazy[node*2]+=lazy[node];
      lazy[node*2+1]+=lazy[node];
    }
    lazy[node]=0;
  }
}

void update_range(int start, int end, int node, int left, int right, int dif){
  update_lazy(node, start, end);
  if(left > end || right < start) return;
  if(left <= start && end <= right){
    lazy[node]+=dif;
    update_lazy(node, start, end);
    return;
  }
  int mid=(start+end)/2;
  update_range(start, mid, node*2, left, right, dif);
  update_range(mid+1, end, node*2+1, left, right, dif);
  tree[node]=tree[node*2]+tree[node*2+1];
}

//start, end는 세그먼트 트리 범위, left ~ right : 구할 구간합
long long sum(int start, int end, int node, int left, int right){
  //범위 해당 X
  update_lazy(node, start, end);
  if(left > end || right < start) return 0;
  if(left <= start && end <= right) return tree[node];
  int mid=(start+end)/2;
  return sum(start, mid, node*2, left, right) + sum(mid+1, end, node*2+1, left, right);
}

int main(){
  fastio;
  long long n,m,k,t,f,s,idx;
  cin >> n >> m >> k;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  init(1,n,1);
  for(int i=0;i<m+k;i++){
    cin >> t;
    if(t==1){
      cin >> f >> s >> idx;
      update_range(1,n,1,f,s,idx);
    }
    else{
      cin >> f >> s;
      cout << sum(1,n,1,f,s) << '\n';
    }
  }
  return 0;
}
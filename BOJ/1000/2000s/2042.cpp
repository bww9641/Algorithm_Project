#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

long long a[1000005];
long long tree[4*1000005];

//start, end는 세그먼트 트리 범위
long long init(int start, int end, int node){
  if(start == end) return tree[node]=a[start];
  int mid=(start+end)/2;
  return tree[node]=init(start,mid,node*2)+init(mid+1,end,node*2+1);
}

//start, end는 세그먼트 트리 범위, left ~ right : 구할 구간합
long long sum(int start, int end, int node, int left, int right){
  //범위 해당 X
  if(left > end || right < start) return 0;
  if(left <= start && end <= right) return tree[node];
  int mid=(start+end)/2;
  return sum(start, mid, node*2, left, right) + sum(mid+1, end, node*2+1, left, right);
}

void update(int start, int end, int node, int index, int dif){
  if(index < start || index > end) return;
  tree[node]+=dif;
  if(start == end) return;
  int mid=(start+end)/2;
  update(start, mid, node*2, index, dif);
  update(mid+1, end, node*2+1, index, dif);
}

int main(){
  fastio;
  long long n,m,k,t,f,s;
  cin >> n >> m >> k;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  init(1,n,1);
  for(int i=0;i<m+k;i++){
    cin >> t >> f >> s;
    if(t==1){
      int diff=s-a[f];
      a[f]=s;
      update(1,n,1,f,diff);
    }
    else cout << sum(1,n,1,f,s) << '\n';
  }
  return 0;
}
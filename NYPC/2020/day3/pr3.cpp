//공격 상황 시뮬레이션
#include<bits/stdc++.h>
#define x first
#define y second
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;
typedef pair<long long, long long> pll;
long long n,a,b,ans,sw,k=1;
pll off[300005];
vector<pll> seg[900005];

long long ccw(pll a, pll b, pll c) {
    return 1LL * (a.x * b.y + b.x * c.y + c.x * a.y - b.x * a.y - c.x * b.y - a.x * c.y);
}

void init(long long n, pll *off){
  while(k<=n) k*=2;
  for(int i=0;i<n;i++){
    seg[k+i].push_back(off[i]);
    long long temp=k+i;
    while(temp>1){
      temp/=2;
      seg[temp].push_back(off[i]);
    }
  }
  for(int i=1;i<2*k;i++){
    vector<pll> tcw;
    for(auto &j : seg[i]){
      while(tcw.size()>=2 && ccw(tcw[tcw.size()-2],tcw.back(),j)>=0){
        tcw.pop_back();
      }
      tcw.push_back(j);
    }
    seg[i]=tcw;
  }
}
bool inner(long long p,pll st,pll en){
  if(seg[p].empty()) return 0;
  auto fk = [&](pll x){
    long long a1= -en.second+st.second;
    long long a2= en.first-st.first;
    return 1LL*a1*x.first+1LL*a2*x.second;
  };
  long long s=0,e=seg[p].size()-1;
  while(s!=e){
    long long mid=(s+e)/2;
    if(fk(seg[p][mid])>=fk(seg[p][mid+1])) e=mid;
    else s=mid+1;
  }
  return ccw(st,en,seg[p][s]) > 0;
}

bool query(long long start,long long end,pll st,pll en){
  start+=k;
  end+=k;
  while(start<end){
    if(start%2==1&&inner(start++,st,en)) return 1;
    if(end%2==0&&inner(end--,st,en)) return 1;
    start/=2;
    end/=2;
  }
  if(start==end && inner(start,st,en)) return 1;
  return 0;
}

int main(){
  fastio;
  cin >> n >> a >> b;
  for(int i=0;i<n;i++){
    cin >> off[i].x >> off[i].y;
    off[i].x-=a;
  }
  sort(off,off+n,comp);
  init(n,off);
  for(int i=0;i<n;i++){
    pll st, en;
    st={b-a,0};
    en={off[i].x,off[i].y};
    auto comp = [&](const pll &a, const pll &b){
      long long temp=ccw({0,0},a,b);
      if(temp==0) return a.first<b.first;
      return temp>0;
    };
    int ts=lower_bound(off,off+n,st,comp)-off;
    int te=upper_bound(off,off+n,en,comp)-off-1;
    if(!query(ts,te,st,en)) ans++;
  }
  cout << ans;
  return 0;
}

























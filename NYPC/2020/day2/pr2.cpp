//이어달리기(Two Pointer Ver.)
#include<bits/stdc++.h>
#define p first
#define q second
//lis -> {p,q} -> comp : a[p]+a[q] min
using namespace std;

typedef pair<int, int> pii;

vector<pii> lis;
map<pii, int> pc;
int n,m,se,ms,a[405];
int s=0,e=1,check[80005],cnt=1,Max=1;
bool comp(pii &c1, pii &c2){
  return a[c1.p]+a[c1.q]<a[c2.p]+a[c2.q];
}

int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d:%d:%d",&m,&se,&ms);
    a[i]=m*6000+se*100+ms;
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      lis.push_back({i,j});
      //printf("%d %d %d\n",i,j,a[i]+a[j]);
    }
  }
  a[n]=1000000000;
  sort(lis.begin(),lis.end(),comp);
  lis.push_back({n,n});
  check[n]=1;
  /*for(int i=0;i<n*(n-1)/2;i++){
    printf("after %d: %d %d %d\n",i,lis[i].p,lis[i].q,a[lis[i].p]+a[lis[i].q]);
  }*/
  if(n*(n-1)/2==0){
    printf("0");
    return 0;
  }
  pc[{lis[0].p,lis[0].q}]=1;
  check[lis[0].p]=check[lis[0].q]=1;
  while(s<n*(n-1)/2){
    //printf("s : %d, e : %d, lis[s]: %d,%d lis[e]: %d,%d a[s] : %d, a[e] : %d Max : %d\n", s, e, lis[s].p, lis[s].q, lis[e].p, lis[e].q, a[lis[s].p]+a[lis[s].q], a[lis[e].p]+a[lis[e].q],Max);
    if(!check[lis[s].p]&&!check[lis[s].q]){
      pc[{lis[s].p,lis[s].q}]=1;
      check[lis[s].p]=check[lis[s].q]=1;
      cnt++;
      if(Max<cnt) Max=cnt;
    }
    if(s==e){
      if(e==n*(n-1)/2-1) break;
      pc[{lis[e].p,lis[e].q}]=1;
      check[lis[e].p]=check[lis[e].q]=1;
      cnt=1;
      e++;
    }
    else if(a[lis[e].p]+a[lis[e].q]-a[lis[s].p]-a[lis[s].q]>=1000){
      pc[{lis[s].p,lis[s].q}]=0,cnt--;
      check[lis[s].p]=check[lis[s].q]=0;
      s++;
      while(check[lis[s].p]||check[lis[s].q]){
        if(pc[{lis[s].p,lis[s].q}]) check[lis[s].p]=check[lis[s].q]=0,pc[{lis[s].p,lis[s].q}]=0,cnt--;
        s++;
      }
      //printf("s change %d\n",s);
    }
    else if(!check[lis[e].p]&&!check[lis[e].q]){
      pc[{lis[e].p,lis[e].q}]=1;
      check[lis[e].p]=check[lis[e].q]=1;
      cnt++;
      if(Max<cnt) Max=cnt;
      e++;
    }
    else e++;
  }
  printf("%d",Max);
  return 0;
}
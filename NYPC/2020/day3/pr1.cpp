//사회적 거리두기
#include<bits/stdc++.h>
#include<Windows.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

//map 만들기. 0 : 빈칸, 1 : 망가진 책상, 2 : 채워진 자리, -1 (or 1) : 못오는 부분
int a[20][20];
int n,k,r,c,size,visit[20][20],idx=0,Max=0;
vector<pair<int, int> > ans;
vector<pair<int, int> > res[500005];
vector<pair<int, int> > cnt;

bool comp(pair<int, int> &c1,pair<int, int> &c2){
  return c1.first>c2.first;
}

void dfs(int y,int x){
  map<pair<int, int>, int> mp;
  for(int i=y-1;i<=y+1;i++){
    for(int j=x-1;j<=x+1;j++){
      if(i<1||i>n||j<1||j>n) continue;
      if(i==y&&j==x){
        a[i][j]=2,ans.push_back({i,j});
        //cout << ans.size() << "\n";
        size=ans.size();
        if(size>Max){
          Max=size;
          cout << Max << '\n';
          cnt.push_back({size,idx});
          for(int p=0;p<size;p++){
            res[idx].push_back({ans[p].first,ans[p].second});
            cout << ans[p].first << " " << ans[p].second << '\n'; 
          }
          idx++;
        }
      }
      else{
        if(a[i][j]==-1) mp[{i,j}]=1;
        if(a[i][j]!=1) a[i][j]=-1;
      }
    }
  }
  /*for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(a[i][j]==0) printf(". ");
      else if(a[i][j]==1) printf("O ");
      else if(a[i][j]==2) printf("V ");
      else if(a[i][j]=-1) printf("! ");
    }
    printf("\n");
  }
  printf("\n");
  Sleep(100);*/
  for(int i=y-2;i<=y+2;i++){
    for(int j=x-2;j<=x+2;j++){
      if(i<1||i>n||j<1||j>n) continue;
      if(i==y-2||i==y+2||j==x-2||j==x+2){
        if(a[i][j]==0){
          if(!visit[i][j]){
            visit[i][j]=1;
            dfs(i,j);
            visit[i][j]=0;
          }
        }
      }
    }
  }
  for(int i=y-1;i<=y+1;i++){
    for(int j=x-1;j<=x+1;j++){
      if(i<1||i>n||j<1||j>n) continue;
      if(a[i][j]!=1){
        if(!mp[{i,j}]) a[i][j]=0;
      }
    }
  }
  ans.pop_back();
}

int main(){
  fastio;
  int sw=0;
  cin >> n >> k;
  for(int i=0;i<=n+1;i++){
    for(int j=0;j<=n+1;j++){
      if(i==0||j==0||i==n+1||j==n+1){
        a[i][j]=1;
      }
    }
  }
  for(int i=1;i<=k;i++){
    cin >> r >> c;
    a[r][c]=1;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(!a[i][j]){
        visit[i][j]=1;
        dfs(i,j);
        visit[i][j]=0;
        sw=1;
        break;
      }
    }
    if(sw==1) break;
  }
  sort(cnt.begin(),cnt.end(),comp);
  int res_size=cnt[0].first;
  cout << res_size << '\n';
  for(int i=0;i<res_size;i++){
    cout << res[cnt[0].second][i].first << ' ' << res[cnt[0].second][i].second << '\n';
  }
  return 0;
}
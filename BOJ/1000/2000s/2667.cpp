#include<iostream>
#include<algorithm>
#include<vector>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int arr[30][30],ans,n;

void dfs(int i,int j){
  arr[i][j]=0;
  if(i-1>=0&&arr[i-1][j]==1){
    ans++;
    dfs(i-1,j);
  }
  if(i+1<n&&arr[i+1][j]==1){
    ans++;
    dfs(i+1,j);
  }
  if(j-1>=0&&arr[i][j-1]==1){
    ans++;
    dfs(i,j-1);
  }
  if(j+1<n&&arr[i][j+1]==1){
    ans++;
    dfs(i,j+1);
  }
}

int main(){
  fastio;
  vector<int> v;
  string a;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a;
    for(int j=0;j<n;j++){
      arr[i][j]=a[j]-'0';
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]==1){
        ans=1;
        dfs(i,j);
        v.push_back(ans);
      }
    }
  }
  int size=v.size();
  sort(v.begin(),v.end());
  cout << size << '\n';
  for(int i=0;i<size;i++){
    cout << v[i] << '\n';
  }
}
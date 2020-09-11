//유저 그룹 나누기
#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

long long n,k,x;
long long arr[405];
long long dp[405][405];

long long Sum (int st,int en){
  long long res=0;
  for(int i=st;i<=en;i++){
    res+=arr[i];
  }
  return res;
}

long long part(long long k, long long n){
  long long ans=INT64_MAX;
  for(int o=0;o<n;o++){
    int min_left=0;
    for(int min_right=min_left;min_right<n;min_right++){
      long long min_sum=Sum(min_left,min_right);
      for(int s=0;s<k;s++){
        for(int q=0;q<n;q++){
          dp[s][q]=INT64_MAX;
        }
      }
      dp[0][min_right-min_left]=min_sum;

      for(int p=1;p<k;p++){
        for(int max_left=min_right;max_left<n;max_left++){
          for(int max_right=min_left;max_right<n;max_right++){
            long long max_sum=Sum(max_left+1,max_right);
            if(max_sum>=min_sum){
              dp[p][max_right]=min(dp[p][max_right],max(dp[p-1][max_left],max_sum));
            }
          }
        }
      }
      if(dp[k-1][n-1]==INT64_MAX) continue;
      ans=min(ans,dp[k-1][n-1]-min_sum);
    }
    long long t[405];
    for(int i=0;i<n;i++){
      long long idx=i+n-1;
      t[idx%n]=arr[i];
    }
    for(int i=0;i<n;i++) arr[i]=t[i];
  }
  return ans;
}

int main(){
  cin >> n >> k >> x;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  cout << part(k,n);
  return 0;
}
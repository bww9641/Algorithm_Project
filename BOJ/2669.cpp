#include<iostream>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int a[105][105]={};
  int x1,y1,x2,y2,cnt=0;
  for(int i=0;i<4;i++){
    cin >> x1 >> y1 >> x2 >> y2;
    for(int j=y1-1;j<=y2-2;j++){
      for(int k=x1-1;k<=x2-2;k++){
        if(a[j][k]==0) cnt++;
        a[j][k]=1;
      }
    }
  }
  cout << cnt;
  return 0;
}
#include<bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  int k;
  char a[2000005]={};
  int cnt=0;
  cin >> k;
  for(int i=0;i<k;i++) a[cnt++]='1';
  for(int i=0;i<k-1;i++) a[cnt++]='0';
  printf("%s",a);
  return 0;
}
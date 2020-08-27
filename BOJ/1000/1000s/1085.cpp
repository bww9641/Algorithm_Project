#include<iostream>
#include<algorithm>

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  int x,y,w,h;
  cin >> x >> y >> w >> h;
  cout << min(x,min(y,min(w-x,h-y)));
  return 0;
}
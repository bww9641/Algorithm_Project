#include<iostream>
#include<cmath>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

int main(){
  fastio;
  double a,b,c,ans1,ans2;
  cin >> a >> b >> c;
  ans1=(a*a*b*b)/(c*c+b*b);
  ans2=(a*a*c*c)/(c*c+b*b);
  cout << (int)sqrt(ans1) << " " << (int)sqrt(ans2);
  return 0;
}
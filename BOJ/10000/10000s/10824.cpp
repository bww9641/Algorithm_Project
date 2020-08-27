#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a,b,k;
  cin >> a; cin >> k; a+=k;
  cin >> b; cin >> k; b+=k;
  printf("%lld",stoll(a)+stoll(b));
  return 0;
}
#include<iostream>

using namespace std;

int main(){
  int n,a,b,t=0;
  cin >> n >> a >> b;
  while(++t){
    n++,a++,b++;
    if(a/2==b/2){
      printf("%d",t);
      return 0;
    }
    n/=2,a/=2,b/=2;
  }
  return 0;
}
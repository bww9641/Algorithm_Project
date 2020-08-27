//UP & DOWN
#include<iostream>
#include<string>

using namespace std;

int main(){
  string r;
  int st=1,en=1000,mid;
  while(1){
    mid=(st+en)/2;
    cout << mid << '\n';
    cout.flush();
    cin >> r;
    if(r == "CORRECT") break;
    else if(r == "UP") st=mid+1;
    else en=mid-1;
  }
}
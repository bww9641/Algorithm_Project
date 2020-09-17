#include<bits/stdc++.h>

using namespace std;

int main(){
  int h,m,s;
  char a;
  scanf("%2d:%2d:%2d%c",&h,&m,&s,&a);
  if(a=='P') printf("%02d:%02d:%02d",h==12?h:h+12,m,s);
  else{
    if(h==12) h=0;
    printf("%02d:%02d:%02d",h,m,s);
  }
  return 0;
}
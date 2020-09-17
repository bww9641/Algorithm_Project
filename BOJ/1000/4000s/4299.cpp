#include<stdio.h>

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int c=(a+b)/2;
  int d=a-c;
  if(c<0 || d<0 || (a+b)%2!=0){
    printf("-1");
    return 0;
  }
  if(d>c) printf("%d %d",d,c);
  else printf("%d %d",c,d);
  return 0;
}
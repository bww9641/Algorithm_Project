//카트라이더 별 모으기
#include<stdio.h>

int main(){
  int t[5]={},a,b,c,n,k;
  for(int i=1;i<=3;i++){
    scanf("%d:%d:%d",&a,&b,&c);
    t[i]=c+b*100+a*6000;
  }
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d:%d:%d",&a,&b,&c);
    k=c+b*100+a*6000;
    if(k<=t[3]) printf("***\n");
    else if(k<=t[2]) printf("**\n");
    else if(k<=t[1]) printf("*\n");
    else printf(":(\n");
  }
}
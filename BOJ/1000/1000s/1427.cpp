#include<stdio.h>
#include<algorithm>
using namespace std;

bool comp(const int &a, const int &b){
  return a>b;
}

int main()
{
  int a[55]={};
  int i=0;
  while(scanf("%1d",&a[i])!=EOF)
  {
    i++;
  }
  for(int i=0;i<50;i++){
    printf("%d ",a[i]);
  }
  sort(a,a+i);
  for(int j=0;j<i;j++){
    printf("%d",a[i]);
  }
  return 0;
}
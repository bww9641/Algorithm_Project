#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
  int a[3]={},b[2]={};
  scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&b[0],&b[1]);
  sort(a,a+3);
  sort(b,b+2);
  printf("%d",a[0]+b[0]-50);
  return 0;
}
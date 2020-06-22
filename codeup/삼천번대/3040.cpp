#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
  int n,cnt=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    double tmp=i*log10(9.0);
    if(tmp-(int)tmp>=log10(9.0)&&tmp-(int)tmp<1) cnt++;
  }
  printf("%d",cnt);
  return 0;
}
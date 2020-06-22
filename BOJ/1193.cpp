#include<stdio.h>

int main()
{
  int x,sum=0,i,j,cnt=1;
  scanf("%d",&x);
  while(1)
  {
    if(sum+cnt>=x) break;
    else sum+=cnt++;
  }
  if(x-sum==0) cnt--;
  if(cnt%2==1)
    printf("%d/%d",x-sum==0?cnt-x+sum:cnt-x+sum+1,x-sum==0?1:x-sum);
  else printf("%d/%d",x-sum==0?1:x-sum,x-sum==0?cnt-x+sum:cnt-x+sum+1);
  return 0;
}

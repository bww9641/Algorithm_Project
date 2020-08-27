/* #include<stdio.h>

int n0,n1;

int f(int n){
  if(n==0){
    n0++;
    return 0;
  }
  else if(n==1){
    n1++;
    return 1;
  }
  else return f(n-1)+f(n-2);
}

int main()
{
  int t,k;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    scanf("%d",&k);
    n0=n1=0;
    f(k);
    printf("%d %d\n",n0,n1);
  }
  return 0;
} */

#include<stdio.h>

int main()
{
  int d[105][2]={};
  d[0][0]=1;
  d[1][1]=1;
  int t,k;
  scanf("%d",&t);
  for(int i=2;i<=40;i++)
  {
    d[i][0]=d[i-1][0]+d[i-2][0];
    d[i][1]=d[i-1][1]+d[i-2][1];
  }
  for(int i=0;i<t;i++)
  {
    scanf("%d",&k);
    printf("%d %d\n",d[k][0],d[k][1]);
  }
  return 0;
}
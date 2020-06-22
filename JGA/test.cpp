/* #include<stdio.h>

int main()
{
  int a[7]={};
  int t;
  for(int i=0;i<10;i++)
  {
    scanf("%d",&t);
    a[t]++;
  }
  for(int i=1;i<=6;i++)
  {
    printf("%d : %d\n",i,a[i]);
  }
  return 0;
}
 */
/* #include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(i==j||i==n-j+1) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
} */
#include<stdio.h>

int main()
{
  int sum=0;
  for(int i=1;i<=10;i++)
  {
    for(int j=1;j<=10;j++)
    {
      sum+=i+j-1;
      printf("%d ",i+j-1);
    }
  }
  printf("%d",sum);
  return 0;
}


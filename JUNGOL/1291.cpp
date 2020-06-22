#include<stdio.h>

int main()
{
  int s,e;
  for(;;)
  {
    scanf("%d %d",&s,&e);
    if(s<=1||s>=10||e<=1||e>=10)
      printf("INPUT ERROR!\n");
    else break;
  }
  if(s>e)
  {
    for(int i=1;i<=9;i++)
    {
      for(int j=s;j>=e;j--)
      {
        printf("%d * %d = %2d   ",j,i,j*i);
      }
      printf("\n");
    }
  }
  else
  {
    for(int i=1;i<=9;i++)
    {
      for(int j=s;j<=e;j++)
      {
        printf("%d * %d = %2d   ",j,i,j*i);
      }
      printf("\n");
    }
  }
}

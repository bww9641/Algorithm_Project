#include<stdio.h>

int main()
{
  int s,e;
  scanf("%d %d",&s,&e);
  if(s>e)
  {
    for(int i=s;i>=e;i--)
    {
      for(int j=1;j<=3;j++)
      {
        for(int k=j;k<=j+2;k++)
        {
          printf("%d * %d = %2d   ",i,k,i*k);
        }
        printf("\n");
      }
      printf("\n");
    }
  }
  else
  {
    for(int i=s;i<=e;i++)
    {
      for(int j=1;j<=9;j+=3)
      {
        for(int k=j;k<=j+2;k++)
        {
          printf("%d * %d = %2d   ",i,k,i*k);
        }
        printf("\n");
      }
      printf("\n");
    }
  }
  return 0;
}

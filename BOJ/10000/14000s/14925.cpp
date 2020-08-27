#include<stdio.h>

int main()
{
  int a[1005][1005]={},min;
  int m,n;
  scanf("%d %d",&m,&n);
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  if(m==1&&n==1&&a[0][0]!=0)
  {
    printf("0");
    return 0;
  }
  if(m<n) min=m;
  else min=n;
  int sw=0;
  for(int p=n;p>=1;p--)
  {
    for(int i=0;i<m-p+1;i++)
    {
      for(int j=0;j<n-p+1;j++)
      {
        sw=1;
        for(int k=i;k<i+p;k++)
        {
          for(int l=j;l<j+p;l++)
          {
            if(a[k][l]!=0)
            {
              sw=0;
              break;
            }
          }
        }
        if(sw==1)
        {
          printf("%d",p);
          return 0;
        }
      }
    }
  }
}
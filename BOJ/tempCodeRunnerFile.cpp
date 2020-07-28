#include<stdio.h>

int main()
{
  char a[1005][105]={};
  int n,sw=0,min=105;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%s",a[i]);
  }
  for(int i=n-1;i>=0;i--)
  {
    for(int j=0;j<n;j++)
    {
      for(int k=j+1;k<n;k++)
      {
        sw=0;
        for(int l=n-1;l>=i;l--)
        {
          if(a[j][l]!=a[k][l])
          {
            sw=1;
            break;
          }
        }
        if(sw==0) break;
      }
      if(sw==0) break;
    }
    if(sw==1)  min=n-i;
  }
  printf("%d",min);
  return 0;
}
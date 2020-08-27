#include<stdio.h>
#include<string.h>
int main()
{
  char a[1005][105]={};
  int n,sw,sw2,min=105;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%s",a[i]);
  }
  for(int i=strlen(a[0])-1;i>=0;i--)
  {
    sw2=1;
    for(int j=0;j<n;j++)
    {
      for(int k=j+1;k<n;k++)
      {
        sw=0;
        for(int l=strlen(a[0])-1;l>=i;l--)
        {
          if(a[j][l]!=a[k][l])
          {
            sw=1;
            break;
          }
        }
        if(sw==0)
        {
          sw2=0;
          break;
        }
        //printf("sw: %d j: %d k: %d\n",sw,j,k);
      }
      if(sw==0)
      {
        sw2=0;
        break;
      }
    }
    if(sw2==1 && min>strlen(a[0])-i)  min=strlen(a[0])-i;
  }
  printf("%d",min);
  return 0;
}
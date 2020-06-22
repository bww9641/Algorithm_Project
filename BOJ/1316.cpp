#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  char a[105][105]={};
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    scanf("%s",a[i]);
    char prev=a[i][0];
    int sw=0;
    int check[26]={};
    check[prev-'a']=1;
    for(int j=0;a[i][j]!='\0';j++)
    {
      if(a[i][j]!=prev)
      {
        prev=a[i][j];
        if(check[prev-'a']==1)
        {
          sw=1;
          break;
        }
        check[prev-'a']=1;
      }
    }
    if(sw==0) cnt++;
  }
  printf("%d",cnt);
  return 0;
}
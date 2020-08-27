#include<stdio.h>

int main()
{
  char a[1000005]={};
  int c[150]={},d[150]={};
  int max='A';
  scanf("%s",a);
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>='a'&&a[i]<='z') c[a[i]-32]++;
    else c[a[i]]++;
  }
  for(int i='A';i<='Z';i++)
  {
    if(c[max]<c[i]) max=i;
  }
  for(int i='A';i<'Z';i++)
  {
    if(max!=i&&c[max]==c[i])
    {
      printf("?");
      return 0;
    }
  }
  printf("%c",max);
  return 0;
}
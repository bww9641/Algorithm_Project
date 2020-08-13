#include<stdio.h>

int main()
{
  char a[105]={};
  int cnt=0;
  scanf("%s",a);
  for(int i=0;a[i]!='\0';i++)
    cnt++;
  printf("%d",cnt);
  return 0;
}
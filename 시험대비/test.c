#include<stdio.h>

int main()
{
  char a[105][505]={0};
  for(int i=0;i<8;i++)
  {
    gets(a[i]);
  }
  for(int i=7;i>=0;i--)
  {
    printf("%s\n",a[i]);
  }
  return 0;
}
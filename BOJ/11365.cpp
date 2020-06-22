#include<stdio.h>
#include<string.h>
int main()
{
  while(1)
  {
    char a[505]={};
    gets(a);
    if(!strcmp("END",a)) return 0;
    for(int i=strlen(a)-1;i>=0;i--)
    {
      printf("%c",a[i]);
    }
    printf("\n");
  }
  return 0;
}
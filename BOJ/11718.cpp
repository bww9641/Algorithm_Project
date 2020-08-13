#include<stdio.h>

int main()
{
  char s[105]={};
  while(scanf("%[^\n]\n",s)==1){
    puts(s);
  }
  return 0;
}
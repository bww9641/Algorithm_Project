#include<stdio.h>

int main()
{
  char s[105]={};
  int check[27]={};
  scanf("%s",s);
  for(int i=0;s[i]!='\0';i++){
    check[s[i]-'a']++;
  }
  for(int i=0;i<26;i++){
    printf("%d ",check[i]);
  }
  return 0;
}
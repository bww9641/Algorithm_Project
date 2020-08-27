#include<stdio.h>

int main()
{
  char s[105]={};
  scanf("%[^\n]\n",s);
  for(int i=0;s[i]!='\0';i++){
    if(s[i]==' ') printf(" ");
    else if(s[i]>='A'&&s[i]<='Z')
      printf("%c",(s[i]-'A'+13)%26+'A');
    else if(s[i]>='a'&&s[i]<='z')
      printf("%c",(s[i]-'a'+13)%26+'a');
    else printf("%c",s[i]);
  }
  return 0;
}
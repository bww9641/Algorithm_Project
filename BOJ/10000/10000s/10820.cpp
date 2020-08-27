#include<stdio.h>
#include<string.h>
int main()
{
  char s[105]={};
  int a,b,c,d;
  while(fgets(s,105,stdin)){
    a=b=c=d=0;
    for(int i=0;i<strlen(s);i++){
      if(s[i]>='a'&&s[i]<='z') a++;
      else if(s[i]>='A'&&s[i]<='Z') b++;
      else if(s[i]>='0'&&s[i]<='9') c++;
      else d++;
    }
    printf("%d %d %d %d\n",a,b,c,d-1);
  }
  return 0;
}
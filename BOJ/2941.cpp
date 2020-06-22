#include<stdio.h>
#include<string.h>
int main()
{
  char a[105]={};
  int cnt=0;
  scanf("%s",a);
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]=='l'&&a[i+1]=='j') cnt++,i++;
    else if(a[i]=='c'&&(a[i+1]=='-'||a[i+1]=='=')) cnt++,i++;
    else if(a[i]=='d')
    {
      if(a[i+1]=='-') cnt++,i++;
      else if(a[i+1]=='z'&&a[i+2]=='=') cnt++,i+=2;
      else cnt++;
    }
    else if(a[i]=='n'&&a[i+1]=='j') cnt++,i++;
    else if(a[i]=='z'&&a[i+1]=='=') cnt++,i++;
    else if(a[i]=='s'&&a[i+1]=='=') cnt++,i++;
    else cnt++;
  }
  printf("%d",cnt);
  return 0;
}
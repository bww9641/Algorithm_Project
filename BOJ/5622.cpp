#include<stdio.h>

int main()
{
  char a[15]={};
  int cnt=0;
  scanf("%s",a);
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>='A'&&a[i]<='C') cnt+=3;
    if(a[i]>='D'&&a[i]<='F') cnt+=4;
    if(a[i]>='G'&&a[i]<='I') cnt+=5;
    if(a[i]>='J'&&a[i]<='L') cnt+=6;
    if(a[i]>='M'&&a[i]<='O') cnt+=7;
    if(a[i]>='P'&&a[i]<='S') cnt+=8;
    if(a[i]>='T'&&a[i]<='V') cnt+=9;
    if(a[i]>='W'&&a[i]<='Z') cnt+=10;
  }
  printf("%d",cnt);
  return 0;
}
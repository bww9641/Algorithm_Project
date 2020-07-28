#include<stdio.h>
#include<string.h>
int main()
{
  char a[333334]={};
  char b[8][4]={{'0','0','0','\0'},
               {'0','0','1','\0'},
               {'0','1','0','\0'},
               {'0','1','1','\0'},
               {'1','0','0','\0'},
               {'1','0','1','\0'},
               {'1','1','0','\0'},
               {'1','1','1','\0'}};
  int i,j,t;
  int k;
  scanf("%s",a);
  if(!strcmp(a,"0"))
  {
    printf("0");
    return 0;
  }
  int len=strlen(a);
  for(i=0;i<len;i++)
  {
    k=a[i]-'0';
    t=0;
    if(i==0)
    {
      while(b[k][t++]==0);
      printf("%s",b[k]+t);
    }
    else printf("%s",b[k]);
  }
  return 0;
}
#include<stdio.h>

int main()
{
  char a;
  int k[26]={};
  while(1)
  {
    scanf(" %c",&a);
    if(a>='A'&&a<='Z')
    {
      k[a-'A']++;
    }
    else
    {
      for(int i=0;i<26;i++)
      {
        if(k[i]!=0)
        {
          printf("%c : %d\n",i+'A',k[i]);
        }
      }
      return 0;
    }
  }
}
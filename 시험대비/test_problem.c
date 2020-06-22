#include<stdio.h>

int main()
{
  char a[100]="FqyeYBX{Yv4kk1y_Y1lfgt_1k_jgti_g4ki_1x91cqx14x}}";
  int i,j;
  for(i=1;i<=26;i++)
  {
    for(j=0;j<20;j++)
    {
      if(a[j]=='{'||a[j]=='_') continue;
      if(a[j]>='a'&&a[j]<='z') a[j]=(a[j]-'a'+1)%26+'a';
      else if(a[j]>='A'&&a[j]<='Z') a[j]=(a[j]-'A'+1)%26+'A';
    }
    printf("%s\n",a);
  }
  return 0;
}

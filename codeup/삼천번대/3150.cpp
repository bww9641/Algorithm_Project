#include<stdio.h>

int main()
{
  int i,j,cnt=0;
  char a[305]={};
  while(fgets(a,300,stdin)!=NULL){
    int tmp=0;
    for(i=0;a[i]!='\0';i++,puts(""))
    {
      printf("%c",a[i]);
      if(a[i]==')'&&(a[i+1]!=';'||a[i+1]=='{'||a[i+2]=='{'))
      {
        printf("cnt++\n");
        cnt++;
      }
      tmp++;
    }
    printf("tmp : %d",tmp);
  }
  printf("%d",cnt);
  return 0;
}
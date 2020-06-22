/*#include<stdio.h>

int main()
{
  int a,sum=0,sw=0;
  while(1)
  {
    scanf("%d",&a);
    if(a==0) return 0;
    sum=0,sw=0;
    while(a)
    {
      if(sw==0)
      {
        if(a%10==0)
        {
          a/=10;
          continue;
        }
        else sw=1;
      }
      sum+=a%10;
      printf("%d",a%10);
      a/=10;
    }
    printf(" %d\n",sum);
  }
  return 0;
}
*/
#include<stdio.h>

int main()
{
  printf("%c",88);
}

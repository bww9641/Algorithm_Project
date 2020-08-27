#include<stdio.h>

int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int x,y,g,l;
    int t;
    scanf("%d",&t);
    while(t--){
      scanf("%d %d",&x,&y);
      l=x*y/gcd(x,y);
      printf("%d\n",l);
    }
}
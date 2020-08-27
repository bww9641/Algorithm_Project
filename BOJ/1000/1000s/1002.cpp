#include<stdio.h>
#include<math.h>
double dist(int x1, int y1, int x2, int y2)
{
  return sqrt((double)pow((double)x1-x2,2)+pow((double)y1-y2,2));
}

int main()
{
  int t,x1,y1,r1,x2,y2,r2;
  double d,p,s;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
    d=dist(x1,y1,x2,y2);
    p=(double)r1+r2;
    s=(double)abs(r1-r2);
    if(p>d && s<d) printf("2\n");
    else if(p==d) printf("1\n");
    else if(p<d) printf("0\n");
    else if(s>d) printf("0\n");
    else if(s==d)
    {
      if(r1==r2) printf("-1\n");
      else printf("1\n");
    }
  }
  return 0;
}
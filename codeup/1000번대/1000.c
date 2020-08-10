//1008
/*#include<stdio.h>

int main()
{
  printf("\u250c\u252c\u2510\n");
  printf("\u251c\u253c\u2524\n");
  printf("\u2514\u2534\u2518");
}*/
//1127
/* #include<stdio.h>

int main()
{
  double a,sum=0;
  int b;
  for(int i=0;i<3;i++)
  {
    scanf("%lf %d",&a,&b);
    sum+=a*b;
  }
  printf("%.1lf",sum);
  return 0;
} */
//1128
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%lld",a*123456789LL);
  return 0;
} */
//1131
/* #include<stdio.h>

int main()
{
  char a;
  scanf("%c",&a);
  printf("%c",a);
  return 0;
} */
//1132
/* #include<stdio.h>

int main()
{
  char a[10]={};
  scanf("%s",a);
  printf("%s",a);
  return 0;
} */
//1133
/* #include<stdio.h>

int main()
{
  char a[35]={};
  gets(a);
  printf("%s",a);
  return 0;
} */
//1135(>=),1136(==),1137(!=)
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",a!=b);
  return 0;
} */
//1138
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%d",!a);
  return 0;
} */
//1139(&),1140(|),1141(&),1144(|),1147(<<),1148(>>)
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",a>>b);
  return 0;
} */
//1149
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",a>b?a:b);
  return 0;
} */
//1150
/* #include<stdio.h>

int main()
{
  int a,b,c,d;
  scanf("%d %d %d",&a,&b,&c);
  d=a>b?b:a;
  printf("%d",d>c?c:d);
  return 0;
} */
//1151,1152
/*#include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%s",a<10?"small":"big");
  return 0;
}*/
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%c",a>b?'>':a==b?'=':'<');
  return 0;
} */
//1154
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",a>b?a-b:b-a);
  return 0;
} */
//1155
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%s",a%7==0?"multiple":"not multiple");
  return 0;
} */
//1156
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%s",a%2?"odd":"even");
  return 0;
} */
//1157,1158,1159
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%s",(a>=50&&a<=70)||a%6==0?"win":"lose");
  return 0;
} */
//1160
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%s",a%2==1?"oh my god":"enjoy");
  return 0;
} */
//1161
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%s+%s=%s",a%2==0?"짝수":"홀수",b%2==0?"짝수":"홀수",(a+b)%2==0?"짝수":"홀수");
  return 0;
} */
//1162,1163
/*#include<stdio.h>

int main()
{
  int y,m,d;
  scanf("%d %d %d",&y,&m,&d);
  printf("%s",((y+m+d)/100)%2==0?"대박":"그럭저럭");
  return 0;
}*/
//1164
/* #include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("%s",a<=170||b<=170||c<=170?"CRASH":"PASS");
  return 0;
} */
//1165
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  while(a<90) b++,a+=5;
  printf("%d",b);
  return 0;
} */
//1166
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if(a%400==0) printf("yes");
  else if(a%4==0&&a%100!=0) printf("yes");
  else printf("no");
  return 0;
} */
//1167
/* #include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int a[4]={};
  for(int i=0;i<3;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,a+3);
  printf("%d",a[1]);
  return 0;
} */
//1168
/*#include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  a/=10000;
  printf("%d",b==1||b==2?2012-1900-a+1:2012-2000-a+1);
  return 0;
}*/
//1169
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if(2013-a<2000) printf("%d 1",(2013-a)%100);
  else printf("%d 3",(2013-a)%100);
  return 0;
} */
//1170
/* #include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("%d%d%02d",a,b,c);
  return 0;
} */
//1171
/* #include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("%d%02d%03d",a,b,c);
  return 0;
} */
//1172
/* #include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int a[4]={};
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  sort(a,a+3);
  printf("%d %d %d",a[0],a[1],a[2]);
  return 0;
} */
//1173
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d %d",b-30<0?a-1<0?23:a-1:a,b-30<0?b+30:b-30);
  return 0;
} */
//1174
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int m=60*a+b-30;
  a=(m/60+24-(m<0))%24;
  b=(m%60+60)%60;
  printf("%d %d",a,b);
  return 0;
} */
//1180
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%1d%1d",&a,&b);
  printf("%d\n%s",((b*10+a)*2)%100,((b*10+a)*2)%100<=50?"GOOD":"OH MY GOD");
  return 0;
} */
//1201
/*#include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  printf("%s",a>0?"양수":a<0?"음수":"0");
  return 0;
}*/
//1202
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if(a>=90) printf("A");
  else if(a>=80) printf("B");
  else if(a>=70) printf("C");
  else if(a>=60) printf("D");
  else printf("F");
  return 0;
} */
//1203
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if(a>20) printf("비만");
  else if(a<=10) printf("정상");
  else printf("과체중");
  return 0;
} */
//1204
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if(a/10==1) printf("%dth",a);
  else if(a%10==1) printf("%dst",a);
  else if(a%10==2) printf("%dnd",a);
  else if(a%10==3) printf("%drd",a);
  else printf("%dth",a);
  return 0;
} */
//1205
/* #include<stdio.h>
#include<math.h>
double max(double a,double b)
{
  return a>b?a:b;
}

int main()
{
  double a,b;
  scanf("%lf %lf",&a,&b);
  printf("%.6lf",max(a+b,max(a-b,max(a*b,max(a/b,max(b-a,max(b/a,max(pow(a,b),pow(b,a)))))))));
  return 0;
} */
//1206
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if(a>=b&&a%b==0) printf("%d*%d=%d",b,a/b,a);
  else if(a<=b&&b%a==0) printf("%d*%d=%d",a,b/a,b);
  else printf("none");
  return 0;
} */
//1207
/* #include<stdio.h>

int main()
{
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int e=a+b+c+d;
  switch(e)
  {
    case 0:
      printf("모");
      break;
    case 1:
      printf("도");
      break;
    case 2:
      printf("개");
      break;
    case 3:
      printf("걸");
      break;
    case 4:
      printf("윷");
      break;
  }
} */
//1210
/* #include<stdio.h>

int main()
{
  int a[10]={0,400,340,170,100,70},i,j,t,u;
  scanf("%d %d",&t,&u);
  int sum=a[t]+a[u];
  printf("%s",sum>500?"angry":"no angry");
  return 0;
} */
//1212
/* #include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int a[3]={};
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  sort(a,a+3);
  printf("%s",a[0]+a[1]>a[2]?"yes":"no");
  return 0;
} */
//1214
/* #include<stdio.h>

int main()
{
  int k[15]={0,31,0,31,30,31,30,31,31,30,31,30,31};
  int a,b;
  scanf("%d %d",&a,&b);
  if(b==2)
  {
    if(a%400==0||(a%4==0&&a%100!=0)) printf("29");
    else printf("28");
  }
  else printf("%d",k[b]);
  return 0;
} */
//1216
/* #include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a<b-c) printf("advertise");
  else if(a==b-c) printf("does not matter");
  else printf("do not advertise");
  return 0;
} */
//1218
/* #include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a+b<=c) printf("삼각형아님");
  else if(a==b&&b==c) printf("정삼각형");
  else if(a==b||b==c||c==a) printf("이등변삼각형");
  else if(a*a+b*b==c*c) printf("직각삼각형");
  else printf("삼각형");
  return 0;
} */
//1222
/* #include<stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  while(a<90) b++,a+=5;
  if(b>c) printf("win");
  else if(b==c) printf("same");
  else printf("lose");
  return 0;
} */
//1224
/* #include<stdio.h>

int main()
{
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if((float)a/b>(float)c/d) printf(">");
  else if((float)a/b==(float)c/d) printf("=");
  else printf("<");
  return 0;
} */
//1226
/* #include<stdio.h>

int main()
{
  int a[10]={},b[10]={},i,j,sw=0,cnt=0;
  for(i=0;i<7;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<6;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<7;i++)
  {
    for(j=0;j<6;j++)
    {
      if(a[i]==b[j])
      {
        if(i==6) sw=1;
        else cnt++;
      }
    }
  }
  if(cnt==6) printf("1");
  else if(cnt==5&&sw==1) printf("2");
  else if(cnt==5) printf("3");
  else if(cnt==4) printf("4");
  else if(cnt==3) printf("5");
  else printf("0");
  return 0;
} */
//1228
/* #include<stdio.h>

int main()
{
  double a,b;
  scanf("%lf %lf",&a,&b);
  double c=(a-100)*0.9;
  double d=(b-c)*100/c;
  if(d<=10) printf("정상");
  else if(d<=20) printf("과체중");
  else printf("비만");
  return 0;
} */
//1229
/* #include<stdio.h>

int main()
{
  double a,b,c,d;
  scanf("%lf %lf",&a,&b);
  if(a<150) c=a-100;
  else if(a<160) c=(a-150)/2+50;
  else c=(a-100)*0.9;
  d=(b-c)*100/c;
  if(d<=10) printf("정상");
  else if(d<=20) printf("과체중");
  else printf("비만");
  return 0;
} */
//1230
/* #include<stdio.h>

int main()
{
  int a[3]={},sw=0;
  for(int i=0;i<3;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]<=170&&sw==0)
    {
      printf("CRASH %d",a[i]);
      sw=1;
    }
  }
  if(sw==0) printf("PASS");
  return 0;
} */
//1231
/* #include<stdio.h>

int main()
{
  char k;
  int a1,a2;
  scanf("%d%c%d",&a1,&k,&a2);
  if(k=='+') printf("%d",a1+a2);
  else if(k=='-') printf("%d",a1-a2);
  else if(k=='*') printf("%d",a1*a2);
  else if(k=='/') printf("%.2f",(float)a1/a2);
} */
//1251
/* #include<stdio.h>

int main()
{
  int i;
  for(i=1;i<=100;i++)
  {
    printf("%d ",i);
  }
  return 0;
} */
//1252
/* #include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    printf("%d ",i);
  }
  return 0;
} */
//1253
/* #include<stdio.h>

int main()
{
  int a,b,i;
  scanf("%d %d",&a,&b);
  if(a>b)
  {
    int t=a;
    a=b;
    b=t;
  }
  for(i=a;i<=b;i++)
  {
    printf("%d ",i);
  }
} */
//1254
/* #include<stdio.h>

int main()
{
  char a,b;
  scanf("%c %c",&a,&b);
  for(int i=a;i<=b;i++)
  {
    printf("%c ",i);
  }
  return 0;
} */
//1255
/* #include<stdio.h>

int main()
{
  double a,b;
  scanf("%lf %lf",&a,&b);
  for(double i=a;i<=b;i+=0.01)
  {
    printf("%.2lf ",i);
  }
  return 0;
} */
//1256
/* #include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("*");
  }
  return 0;
} */
//1257
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  for(int i=a%2==0?a+1:a;i<=b;i+=2)
  {
    printf("%d ",i);
  }
  return 0;
} */
//1258
/* #include<stdio.h>

int main()
{
  int n,sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++) sum+=i;
  printf("%d",sum);
  return 0;
} */
//1259
/* #include<stdio.h>

int main()
{
  int n,sum=0;
  scanf("%d",&n);
  for(int i=2;i<=n;i+=2)
  {
    sum+=i;
  }
  printf("%d",sum);
  return 0;
} */
//1260
/* #include<stdio.h>

int main()
{
  int a,b,sum=0;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
    if(i%3==0) sum+=i;
  }
  printf("%d",sum);
  return 0;
} */
//1261
/* #include<stdio.h>

int main()
{
  int a;
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a);
    if(a%5==0)
    {
      printf("%d",a);
      return 0;
    }
  }
  printf("0");
  return 0;
} */
//1265
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  for(int i=1;i<=9;i++)
  {
    printf("%d*%d=%d\n",a,i,a*i);
  }
  return 0;
} */
//1266,1267,1268
/* #include<stdio.h>

int main()
{
  int n,t,sum=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&t);
    if(t%2==0) sum++;
  }
  printf("%d",sum);
  return 0;
} */
//1269
/* #include<stdio.h>

int main()
{
  int a,b,c,d,i,t;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  t=a;
  for(i=1;i<=d-1;i++)
  {
    t=t*b+c;
  }
  printf("%d",t);
  return 0;
} */
//1270
/* #include<stdio.h>

int main()
{
  int n,sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    sum+=i%10==1;
  }
  printf("%d",sum);
  return 0;
} */
//1271
/* #include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int n,a[1005]={};
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,a+n);
  printf("%d",a[n-1]);
  return 0;
} */
//1272
/* #include<stdio.h>

int main()
{
  int k,h;
  scanf("%d %d",&k,&h);
  printf("%d",(k%2==1?k/2+1:k/2*10)+(h%2==1?h/2+1:h/2*10));
  return 0;
} */
//1273
/* #include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    if(n%i==0) printf("%d ",i);
  }
  return 0;
} */
//1274
/* #include<stdio.h>

int main()
{
  int a,cnt=0;
  scanf("%d",&a);
  for(int i=1;i<=a;i++)
  {
    if(a%i==0) cnt++;
  }
  if(cnt==2) printf("prime");
  else printf("not prime");
  return 0;
} */
//1275
/* #include<stdio.h>
#include<math.h>
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  printf("%d",(int)pow((double)n,k));
  return 0;
} */
//1276
/* #include<stdio.h>

int main()
{
  int n,sum=1;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    sum*=i;
  }
  printf("%d",sum);
  return 0;
} */
//1277
/* #include<stdio.h>

int main()
{
  int n,a;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a);
    if(i==0) printf("%d ",a);
    if(i==n/2) printf("%d ",a);
    if(i==n-1) printf("%d",a);
  }
  return 0;
} */
//1278
/* #include<stdio.h>

int main()
{
  int a,cnt=0;
  scanf("%d",&a);
  while(a)
  {
    cnt++;
    a/=10;
  }
  printf("%d",cnt);
  return 0;
} */
//1279
/* #include<stdio.h>

int main()
{
  int a,b,sum=0;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
    if(i%2==0) sum-=i;
    else sum+=i;
  }
  printf("%d",sum);
  return 0;
} */
//1280,1281
/* #include<stdio.h>

int main()
{
  int a,b,sum=0;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
    if(i%2==0) printf("-%d",i),sum-=i;
    else
    {
      if(i==a) printf("%d",i);
      else printf("+%d",i);
      sum+=i;
    }
  }
  printf("=%d",sum>0?'+':'-',sum>0?sum:-sum);
  return 0;
} */
//1282
/* #include<stdio.h>

int main()
{
  int n,k=n;
  scanf("%d",&n);
  for(int i=1;;i++)
  {
    if(n-i*i<0)
    {
      printf("%d %d",k,i-1);
      break;
    }
    else k=n-i*i;
  }
  return 0;
} */
//1283
/* #include<stdio.h>

int main()
{
  double a,k;
  int b;
  scanf("%lf",&a);
  scanf("%d",&b);
  double c=a;
  for(int i=0;i<b;i++)
  {
    scanf("%lf",&k);
    a=a*(100.0+k)/100.0;
  }
  double res=a-c;
  printf("%.0lf\n",res);
  if(res>=0.5) printf("good");
  else if(res<0.5&&res>-0.5) printf("same");
  else printf("bad");
} */
//1284
/* #include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      int c1=0,c2=0;
      for(int j=2;j<n/i;j++)
      {
        if(i%j==0&&j<i) c1++;
        if((n/i)%j==0) c2++;
      }
      if(c1==0&&c2==0&&n/i!=1)
      {
        printf("%d %d",i,n/i);
        return 0;
      }
    }
  }
  printf("wrong number");
  return 0;
} */
//1285
/* #include<stdio.h>

int main()
{
  char a;
  int b,i,j,res=0;
  scanf("%d",&res);
  for(i=0;;i++)
  {
    scanf("%c%d",&a,&b);
    if(a=='+') res+=b;
    else if(a=='-') res-=b;
    else if(a=='*') res*=b;
    else if(a=='/') res/=b;
    else if(a=='=')
    {
      printf("%d",res);
      break;
    }
  }
  return 0;
} */
//1286
/* #include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int a[6]={};
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,a+5);
  printf("%d\n%d",a[4],a[0]);
  return 0;
} */
//1287
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=9;i++)
  {
    for(j=1;j<=n*i;j++) printf("*");
    printf("\n");
  }
  return 0;
} */
//1288
/* #include<stdio.h>

int fact(int k)
{
  if(k==0) return 1;
  return fact(k-1)*k;
}

int main()
{
  int n,r;
  scanf("%d %d",&n,&r);
  printf("%d",fact(n)/fact(n-r)/fact(r));
  return 0;
} */
//1289
/* #include<stdio.h>

int max(int a,int b)
{
  return a>b?a:b;
}

int main()
{
  int a,b,c,d,e,f;
  scanf("%d %d%d %d%d %d",&a,&b,&c,&d,&e,&f);
  int p,q,r;
  p=a*b;
  q=c*d;
  r=e*f;
  printf("%d",max(p,max(q,r)));
  return 0;
} */
//1290
/* #include<stdio.h>

int main()
{
  int n,cnt=0;
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if(n%i==0) cnt++;
  }
  printf("%d",cnt);
  return 0;
} */
//1291
/* #include<stdio.h>

int gcd(int a,int b)
{
  if(b==0) return a;
  return gcd(b,a%b);
}

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  printf("%d",gcd(a,gcd(b,c)));
  return 0;
} */
//1292
/* #include<stdio.h>

int main()
{
  long long a,sum=0;
  scanf("%lld",&a);
  while(a)
  {
    sum+=a%10;
    a/=10;
  }
  if(sum%7==4) printf("suspect");
  else printf("citizen");
  return 0;
} */
//1293
/* #include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int n,a[105];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,a+n);
  printf("%d %d",a[n-1],a[0]);
  return 0;
} */
//1294
/* #include<stdio.h>
#include<string.h>
int main()
{
  char a[1005]={};
  gets(a);
  for(int i=0;i<strlen(a);i++)
  {
    if(a[i]==' ') continue;
    a[i]=(a[i]+3-'a')%26+'a';
  }
  printf("%s",a);
  return 0;
} */
//1295
/* #include<stdio.h>
int main()
{
  char a[1005]={};
  scanf("%s",a);
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>='a'&&a[i]<='z') a[i]-=32;
    else if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
  }
  printf("%s",a);
  return 0;
} */
//1296
/* #include<stdio.h>

int main()
{
  double n;
  scanf("%lf",&n);
  double k=n/4*n/4;
  printf("%d",(int)k);
  return 0;
} */
//1297
/* #include<stdio.h>

int main()
{
  int n,max=0,maxi;
  scanf("%d",&n);
  for(int i=1;i<=n/2;i++)
  {
    if(max<i*(n-2*i)) max=i*(n-2*i),maxi=i;
  }
  printf("%d",maxi);
  return 0;
} */
//1351
/* #include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
    for(int j=1;j<=9;j++)
    {
      printf("%d*%d=%d\n",i,j,i*j);
    }
  }
  return 0;
}
 */
//1352~1355
/* #include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=n;i>=1;i--,puts(""))
  {
    for(int j=0;j<n-i;j++) printf(" ");
    for(int j=0;j<i;j++)
    {
      printf("*");
    }
  }
  return 0;
} */
//1356
/* #include<stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  for(int i=1;i<=a;i++)
  {
    for(int j=1;j<=a;j++)
    {
      if(i==1||j==1||i==a||j==a) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
} */
//1357
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
} */
//1358
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n/2+1;i++)
  {
    for(j=1;j<=n/2-i+1;j++)
    {
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
} */
//1359
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
} */
//1360
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i+1;j++)
    {
      printf("%d ",n-i+1);
    }
    printf("\n");
  }
  return 0;
} */
//1361
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      printf(" ");
    }
    printf("**\n");
  }
} */
//1362
/* #include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int i,j,cnt=n*(n+1)/2;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d ",cnt--);
    }
    printf("\n");
  }
  return 0;
} */
//1365,1366
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1||j==1||i==n||j==n||i==j||i==n-j+1||i==n/2+1||j==n/2+1) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
} */
//1367
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=n-1;i>=0;i--)
  {
    for(j=0;j<i;j++) printf(" ");
    for(j=1;j<=n;j++) printf("*");
    printf("\n");
  }
  return 0;
} */
//1368
/* #include<stdio.h>

int main()
{
  char d;
  int h,k,i,j;
  scanf("%d %d %c",&h,&k,&d);
  if(d=='L')
  {
    for(i=0;i<h;i++)
    {
      for(j=0;j<i;j++) printf(" ");
      for(j=1;j<=k;j++) printf("*");
      printf("\n");
    }
  }
  else
  {
    for(i=h-1;i>=0;i--)
    {
      for(j=0;j<i;j++) printf(" ");
      for(j=1;j<=k;j++) printf("*");
      printf("\n");
    }
  }
  return 0;
} */
//1369
/* #include<stdio.h>

int main()
{
  int n,k,i,j;
  scanf("%d %d",&n,&k);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1||j==1||i==n||j==n||(i+j-1)%k==0) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
} */
//1370
/* #include<stdio.h>

int main()
{
  int h,r,i,j,k;
  scanf("%d %d",&h,&r);
  for(k=1;k<=r;k++)
  {
    for(i=1;i<=h;i++)
    {
      for(j=1;j<=i-1;j++) printf(" ");
      printf("*\n");
    }
    for(i=h-1;i>=1;i--)
    {
      for(j=1;j<=i-1;j++) printf(" ");
      printf("*\n");
    }
  }
  return 0;
} */
//1371
/* #include<stdio.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    printf("*");
    for(j=1;j<=2*(i-1);j++) printf(" ");
    printf("*\n");
  }
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    printf("*");
    for(j=1;j<=2*(i-1);j++) printf(" ");
    printf("*\n");
  }
  return 0;
} */
/* #include<stdio.h>

int main()
{
  int a[10]={1,2,3,4,5,1,2,3,4,5};
  int *p=a;
  printf("%d %d %d %d %d",*a,a[0],0[p],*(&a),*p);
  return 0;
} */
#include<stdio.h>

int main()
{
  char *ch="dimigo";
  while(*ch!='\0')
  {
    if(*ch=='i')
      *ch='a';
    ch++;
  }
  printf("%s",ch);
  return 0;
}
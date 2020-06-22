/*#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n%d\n%d",a*(b%10),a*(b%100/10),a*(b/100),a*b);
    return 0;
}*/
/*#include<bits/stdc++.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%400==0) printf("1");
    else if(a%4==0&&a%100!=0) printf("1");
    else printf("0");
    return 0;
}*/
/*#include<bits/stdc++.h>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    if(m-45<0) h--,m+=15;
    else m-=45;
    if(h<0) h+=24;
    printf("%d %d",h,m);
    return 0;
}*/
/*#include<stdio.h>

int main()
{
    int T,a,b;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
    }
    return 0;
}*/
/*#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[1000005]={};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    printf("%d %d",a[0],a[n-1]);
    return 0;
}*/
/*#include<bits/stdc++.h>

int main()
{
    int a,max=0,maxi;
    for(int i=0;i<9;i++)
    {
        scanf("%d",&a);
        if(max<a) max=a,maxi=i;
    }
    printf("%d\n%d",max,maxi+1);
    return 0;
}*/
/*#include<stdio.h>

int main()
{
    int a,c[50]={},r=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a);
        c[a%42]=1;
    }
    for(i=0;i<42;i++)
        r+=c[i];
    printf("%d",r);
    return 0;
}*/
#include<stdio.h>

int f(int n)
{
    if(n==0) return 1;
    return n*f(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}

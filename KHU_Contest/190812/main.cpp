#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string a,res;
int h[4000005];
void manacher(string k,int n)
{
    int r=0,p=0;
    for(int i=0;i<n;i++)
    {
        if(i<=r) h[i]=min(h[2*p-i],r-i);
        else h[i]=0;
        while(i-h[i]-1>=0&&i+h[i]+1<n&&k[i-h[i]-1]==k[i+h[i]+1])
            h[i]++;
        if(r<i+h[i]) r=i+h[i],p=i;
    }
}

int main()
{
    int i,j,n,answer=0;
    cin >> a;
    n=a.size();
    if(a.size()==1)
    {
        printf("1");
        return 0;
    }
    for(i=0;i<n;i++)
    {

        res+='#';
        res+=a[i];
    }
    for(i=0;i<n;i++)
    {
        res+='#';
        res+=a[i];
    }
    res+='#';
    manacher(res,res.size());
    for(i=0;i<res.size()-n-1;i+=2)
    {
        if(h[i]>=n) answer++;
    }
    printf("%d",answer);
    return 0;
}

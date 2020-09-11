//이어달리기
#include<bits/stdc++.h>
#define f first
#define se second
using namespace std;

typedef pair<int, pair<int, int> > pp;

vector<pp> lis;
vector<int> sum;
int check[405]={};
int n;
int m,s,ms,a[405],Max;

void dfs(int idx,int st,int en,int cnt){
    Max=Max<cnt?cnt:Max;
    for(int i=st;i<=en;i++){
        if(!check[lis[i].se.f] && !check[lis[i].se.se]){
            check[lis[i].se.f]=check[lis[i].se.se]=1;
            dfs(i,st,en,cnt+1);
            check[lis[i].se.f]=check[lis[i].se.se]=0;
        }
    }
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d:%d:%d",&m,&s,&ms);
        a[i]=m*600+s*100+ms;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            lis.push_back({a[i]+a[j],{i,j}});
        }
    }
    sort(lis.begin(),lis.end());
    int size=lis.size();
    for(int i=0;i<size;i++){
        sum.push_back(lis[i].f);
    }
    //for(int i=0;i<size;i++){
    //    printf("%d %d %d\n",lis[i].f,lis[i].se.f,lis[i].se.se);
    //}
    for(int i=0;i<size;i++){
        check[lis[i].se.f]=check[lis[i].se.se]=1;
        //printf("%d\n",lower_bound(sum.begin(),sum.end(),lis[i].f+1000)-sum.begin());
        dfs(i+1,i+1,lower_bound(sum.begin(),sum.end(),lis[i].f+1000)-sum.begin()-1,1);
        check[lis[i].se.f]=check[lis[i].se.se]=0;
    }
    printf("%d",Max);
    return 0;
}
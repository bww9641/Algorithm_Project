#include<stdio.h>
int a[105][105];
int qu[100005][3];
int st=0,en=0;

void bfs()
{
    int i,j;
    int ri,rj;
    int cnt=0,min=0;
    while(1)
    {
        ri=qu[st][0];
        rj=qu[st][1];
        cnt=0;
        min=100000;
        if(st>=en) break;
        if(a[ri-1][rj]!=1)
        {
            if(a[ri-1][rj]!=0&&a[ri-1][rj]<min) min=a[ri-1][rj];
            cnt++;
        }
        else
        {
            qu[en][0]=ri-1;
            qu[en][1]=rj;
            en++;
        }
        if(a[ri+1][rj]!=1)
        {
            if(a[ri+1][rj]!=0&&a[ri+1][rj]<min) min=a[ri+1][rj];
            cnt++;
        }
        else
        {
            qu[en][0]=ri+1;
            qu[en][1]=rj;
            en++;
        }
        if(a[ri][rj+1]!=1)
        {
            if(a[ri][rj+1]!=0&&a[ri][rj+1]<min) min=a[ri][rj+1];
            cnt++;
        }
        else
        {
            qu[en][0]=ri;
            qu[en][1]=rj+1;
            en++;
        }
        if(a[ri][rj-1]!=1)
        {
            if(a[ri][rj-1]!=0&&a[ri][rj-1]<min) min=a[ri][rj-1];
            cnt++;
        }
        else
        {
            qu[en][0]=ri;
            qu[en][1]=rj-1;
            en++;
        }
        if(cnt>=2)
        {
            if(min==100000)
            {
                a[ri][rj]=2;
                st++;
                continue;
            }
            a[ri][rj]=min+1;
        }
        st++;
    }
}
int main()
{
    int n,m,i,j,cnt=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==1)
            {
                cnt=0;
                if(a[i-1][j]==0) cnt++;
                if(a[i+1][j]==0) cnt++;
                if(a[i][j+1]==0) cnt++;
                if(a[i][j-1]==0) cnt++;
                if(cnt>=2)
                {
                    qu[en][0]=i;
                    qu[en][1]=j;
                    en++;
                }
            }
        }
    }
    bfs();
    int rmax=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",a[i][j]);
            if(a[i][j]>rmax) rmax=a[i][j];
        }
        printf("\n");
    }
    printf("%d",rmax);
    return 0;
}

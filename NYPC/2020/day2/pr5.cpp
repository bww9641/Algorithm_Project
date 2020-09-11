//격자 게임
#include<bits/stdc++.h>

using namespace std;

int visit[105][105][105],win[105][105][105];
int a[5],cx,cy,tp,tq,tr,pp,qq;
pair<int, int> path[105][105][105];

int find_route(int p,int q,int r){
    visit[tp][tq][tr]=1;
    //printf("p q r %d %d %d\n",p,q,r);
    if(p == 0 && q == 0 && r == 1){
        return win[p][q][r]=0;
    }
    for(int i=1;i<=3;i++){
        for(int j=1;;j++){
            if(i==1&&j>p) break;
            if(i==2&&j>q) break;
            if(i==3&&j>r) break;
            tp=p,tq=q,tr=r;
            if(p>=j&&i>=1) tp=j-1;
            if(q>=j&&i>=2) tq=j-1;
            if(r>=j&&i==3) tr=j-1;
            int temp;
            if(visit[tp][tq][tr]) temp=win[tp][tq][tr];
            else temp=find_route(tp,tq,tr);
            if(temp==0){
                if(i==3 && j==1) continue;
                path[p][q][r]={i,j};
                return win[p][q][r]=1;
            }
        }
    }
    return win[p][q][r]=0;
}

int main(){
    cin >> a[1] >> a[2] >> a[3];
    while(1){
        find_route(a[1],a[2],a[3]);
        cout << path[a[1]][a[2]][a[3]].first << " " << path[a[1]][a[2]][a[3]].second << '\n';
        pp=path[a[1]][a[2]][a[3]].first;
        qq=path[a[1]][a[2]][a[3]].second;
        for(int k=1;k<=pp;k++){
            if(a[k]>=qq) a[k]=qq-1;
        }
        cin >> cx >> cy;
        if(cx==3 && cy==1) break;
        for(int k=1;k<=cx;k++){
            if(a[k]>=cy) a[k]=cy-1;
        }
    }
}
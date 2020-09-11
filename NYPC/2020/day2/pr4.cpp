//탐험 로봇
#include<bits/stdc++.h>
#include<string>

using namespace std;
string a[1005];
int sw,r,c,cnt,idx;
int posy[5]={-1,1,0,0};
int posx[5]={0,0,-1,1};

void dfsland(int y,int x){
    a[y][x]=idx;
    for(int i=0;i<4;i++){
        if(y+posy[i]>r-1||y+posy[i]<0||x+posx[i]<0||x+posx[i]>c-1) continue;
        if(a[y+posy[i]][x+posx[i]]=='L') dfsland(y+posy[i],x+posx[i]);
    }
}

void set_unk(int y,int x){
    a[y][x]='L';
    for(int i=0;i<4;i++){
        if(y+posy[i]>r-1||y+posy[i]<0||x+posx[i]<0||x+posx[i]>c-1) continue;
        if(a[y+posy[i]][x+posx[i]]=='C') set_unk(y+posy[i],x+posx[i]);
    }
}

void dfsmin(int y,int x){
    a[y][x]='C';
    for(int i=0;i<4;i++){
        if(y+posy[i]>r-1||y+posy[i]<0||x+posx[i]<0||x+posx[i]>c-1) continue;
        if(a[y+posy[i]][x+posx[i]]=='L') sw=1;
        else if(a[y+posy[i]][x+posx[i]]=='?') dfsmin(y+posy[i],x+posx[i]);
    }
}

int main(){
    string type;
    cin >> r >> c;
    cin >> type;
    for(int i=0;i<r;i++){
        cin >> a[i];
    }
    if(type=="min"){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]=='?'){
                    sw=0;
                    dfsmin(i,j);
                    if(sw==1) set_unk(i,j);
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]=='L'){
                    dfsland(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt;
    }
    if(type=="max"){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]=='?'){
                    for(int k=0;k<4;k++){
                        if(i+posy[k]>r-1||i+posy[k]<0||j+posx[k]<0||j+posx[k]>c-1) continue;
                        if(a[i+posy[k]][j+posx[k]]=='L') a[i][j]='S';
                    }
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << a[i][j];
            }
            cout <<'\n';
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]=='L'){
                    dfsland(i,j);
                    cnt++;
                }
                if(a[i][j]=='?'){
                    
                    int k=1;
                    while(a[i][j+k]=='?') k++;
                    if(k%2==0) cnt+=k/2;
                    else cnt+=k/2+1;
                    j+=k-1;
                }
            }
        }
        cout << cnt;
    }
    return 0;
}
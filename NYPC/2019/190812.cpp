/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[105]={};
    int s=0,b=0,t=0,n=0;
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z') s++;
        else if(a[i]>='A'&&a[i]<='Z') b++;
        else if(a[i]>='0'&&a[i]<='9') n++;
        else t++;
    }
    if(s>0&&b>0&&t>0&&n>0&&strlen(a)>=8&&strlen(a)<=15) printf("valid");
    else printf("invalid");
    return 0;
}*/
//요리 제작
/*#include<stdio.h>

int main()
{
    int n,prov[105]={},num[105]={},i,j,min=1005;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&prov[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]==0) continue;
        if(min>prov[i]/num[i]) min=prov[i]/num[i];
    }
    printf("%d",min);
    return 0;
}*/
//달팽이 게임
/*#include<stdio.h>

int main()
{
    int n,k,i,j,x=1,y=0,d=1,cnt=1;
    scanf("%d %d",&n,&k);
    while(1)
    {
        for(i=0;i<n;i++)
        {
            y=y+d;
            cnt++;
            if(cnt-1==k)
            {
                printf("%d %d",y,x);
                return 0;
            }
        }
        n--;
        for(i=0;i<n;i++)
        {
            x=x+d;
            cnt++;
            if(cnt-1==k)
            {
                printf("%d %d",y,x);
                return 0;
            }
        }
        d*=-1;
    }
    return 0;
}*/
//최대 HP
/*#include<stdio.h>

int main()
{
    int H,T,a,h,i,j;
    scanf("%d %d",&H,&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&a,&h);
        if(a==1) H-=h;
        else if(a==2) H+=h;
        else
        {
            printf("%d",H+h);
            return 0;
        }
    }
}*/
//ID 확인
/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[105][105]={};
    int n,i,j,gol=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        int sw=1;
        scanf("%s",a[i]);
        gol=0;
        for(j=0;j<strlen(a[i]);j++)
        {
            if(a[i][j]=='@'&&(j==0||j==strlen(a[i])-1))
            {

                sw=0;
                break;
            }
            if(a[i][j]=='@') gol++;
            else if(a[i][j]>='a'&&a[i][j]<='z'){}
            else if(a[i][j]>='A'&&a[i][j]<='Z'){}
            else if(a[i][j]>='0'&&a[i][j]<='9'){}
            else if(a[i][j]=='-'||a[i][j]=='.'){}
            else
            {
                sw=0;
                break;
            }
        }
        printf("%s\n",sw==1&&gol==1?"Yes":"No");
    }
    return 0;
}*/
//우산
/*#include<stdio.h>

int main()
{
    int n,m,b[205]={},check[15]={},i,j,um=0,res=0;
    scanf("%d %d %d",&n,&m,&b[0]);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&b[i],&um);
        if(um==1)
        {
            if(check[b[i-1]]==0) res++;
            else check[b[i-1]]--;
            check[b[i]]++;
        }
    }
    printf("%d",res);
    return 0;
}*/
//약수(44 points)
/*#include<stdio.h>

int main()
{
    long long a,b,cnt=0,i,j,res=0,sw=0;
    scanf("%lld %lld",&a,&b);
    for(i=a;i<=b;i++)
    {
        cnt=0,sw=0;
        for(j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                cnt++;
                if(j*j==i) sw=1;
            }
        }
        cnt=cnt*2-sw;
        res+=cnt;
    }
    printf("%lld",res);
    return 0;
}*/
//수도관(easy GREEDY)
/*#include<stdio.h>
#include<algorithm>
using namespace std;

struct st
{
    int a,b;
};

bool comp(st a,st b)
{
    return a.a<b.a;
}

struct st arr[100005];
int main()
{
    int n,e,i,j,res=1,maxb,minb;
    scanf("%d %d",&n,&e);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&arr[i].a,&arr[i].b);
    }
    sort(arr,arr+n,comp);
    maxb=minb=arr[0].b;
    for(i=1;i<n;i++)
    {
        if(arr[i].b<minb) minb=arr[i].b;
        if(arr[i].b>maxb) maxb=arr[i].b;
        if(abs(minb-maxb)>2*e) res++,minb=maxb=arr[i].b;
    }
    printf("%d",res);
    return 0;
}*/
//신호등(x)
/*#include<stdio.h>

int a[405][405],check[405][405];
int n,m,k,r,c,i,j;

void bfs(int r,int c,int k)
{
    int i;
    if(r==n||c==m||r<0||c<0) return ;
    check[r][c]=k;
    for(i=0;i<4;i++)
    {
        if((a[r][c]+k+i)%4==0&&(check[r][c+1]==0||check[r][c+1]>k+i+1)) bfs(r,c+1,k+i+1);
        else if((a[r][c]+k+i)%4==1&&(check[r-1][c]==0||check[r-1][c]>k+i+1)) bfs(r-1,c,k+i+1);
        else if((a[r][c]+k+i)%4==2&&(check[r][c-1]==0||check[r][c-1]>k+i+1)) bfs(r,c-1,k+i+1);
        else if((a[r][c]+k+i)%4==3&&(check[r+1][c]==0||check[r+1][c]>k+i+1)) bfs(r+1,c,k+i+1);
    }
}

int main()
{
    scanf("%d %d %d %d %d",&n,&m,&k,&r,&c);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    bfs(r,c,k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",check[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//stl_version.(plus direction array - definitely)
/*#include<stdio.h>
#include<queue>
using namespace std;

int a[405][405],check[405][405],dx[4]={0,-1,0,1},dy[4]={1,0,-1,0};
int n,m,k,r,c,i,j;

void bfs(int x,int y){
    queue< pair<int,int> > q;
    q.push(make_pair(x,y));
    int i;
    while(!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int t=(a[x][y]+check[x][y]+i)%4;
            int nx=x+dx[t],ny=y+dy[t];
            if(check[nx][ny]==0||check[nx][ny]>check[x][y]+i+1)
            {
                if(nx==n||ny==m||nx<0||ny<0) continue;
                q.push(make_pair(nx,ny));
                check[nx][ny]=check[x][y]+i+1;
            }
        }
    }
}

int main()
{
    scanf("%d %d %d %d %d",&n,&m,&k,&r,&c);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    check[r][c]=k;
    bfs(r,c);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",check[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
//카트라이더 경험치(X)
/*#include<stdio.h>

int main()
{
    int n,a[20][20]={},check[20]={},dp[20][20]={},i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            for(k=1;k<=i;k++)
            {

                dp[i][j]+=dp[i-1][k];
            }
        }
    }
}*/
//가위바위보(union-find)
/*#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int maxx=-1,mini=200001,maxsize=-1,Size[200005],check[200005],cnt;
vector <pair<int,pair<int,int> > > v[200005],res;

bool comp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.first==b.second.first)
    {
        if(a.second.second==b.second.second) return a.first<b.first;
        else return a.second.second<b.second.second;
    }
    else return a.second.first>b.second.first;
}

struct st
{
    int idx,win=0,lose=0;
};

struct st parent[200005];

int Find(int x)
{
    if(x==parent[x].idx) return x;
    return parent[x].idx=Find(parent[x].idx);
}

void uni(int x,int y)
{
    parent[x].win++;
    parent[y].lose++;
    x=Find(x);
    y=Find(y);
    parent[y].idx=x,Size[x]+=Size[y];
}

int main()
{
    int n,m,i,j,a,b,t;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
    {
        parent[i].idx=i;
        parent[i].win=parent[i].lose=0;
        Size[i]=1;
    }
    for(i=0; i<m; i++)
    {
        scanf("%d %d",&a,&b);
        uni(a,b);
    }
    for(i=1;i<=n;i++)
    {
        if(Size[i]>maxsize) maxsize=Size[i];
    }
    for(i=1;i<=n;i++)
    {
        t=Find(i);
        if(Size[t]==maxsize)
        {
            v[t].push_back(make_pair(i,make_pair(parent[i].win,parent[i].lose)));
            check[t]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(check[i]==1)
        {
            sort(v[i].begin(),v[i].end(),comp);
            if(v[i][0].first<mini) mini=v[i][0].first;
        }
    }
    printf("%d",mini);
    return 0;
}*/
//회 문화의 회문화(0 point)
/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[2000005]={};
    int i,j,cnt=0;
    gets(a);
    int n=strlen(a);
    for(i=n;i<2*n+1;i++)
    {
        a[i]=a[i-n];
    }
    for(i=0;i<n;i++)
    {
        int sw=1;
        for(j=i;j<i+n/2;j++)
        {
            if(a[j]!=a[i+n-j-1]) sw=0;
        }
        if(sw==1) cnt++;
    }
    printf("%d",cnt);
    return 0;
}*/
//stl_version.(100 points get)
/* #include<stdio.h>
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
} */
//넥슨 사진관(XOR segment tree)
/*#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

struct seg
{
    int Size;
    vector<int> minarr;
    seg(int *c,int n){
        Size=n;
        minarr.resize(Size*4);
        init(c,0,Size-1,1);
    }
    int init(int *c,int left,int right,int nd)
    {
        if(left==right)
            return minarr[nd]=c[left];
        int mid=(left+right)/2;
        int lmv=init(c,left,mid,nd*2);
        int rmv=init(c,mid+1,right,nd*2+1);
        return minarr[nd]=lmv^rmv;
    }

    int qu(int left,int right,int nd,int ndleft,int ndright)
    {
        if(right<ndleft||ndright<left)
            return 0;
        if(left<=ndleft&&ndright<=right)
            return minarr[nd];
        int mid=(ndleft+ndright)/2;
        int lmv=qu(left,right,nd*2,ndleft,mid);
        int rmv=qu(left,right,nd*2+1,mid+1,ndright);
        return lmv^rmv;
    }

    int qu(int left,int right)
    {
        return qu(left,right,1,0,Size-1);
    }

    int renew(int idx,int val,int nd,int ndleft,int ndright)
    {
        if(idx<ndleft||ndright<idx) return minarr[nd];
        if(ndleft==ndright)
            return minarr[nd]=val;
        int mid=(ndleft+ndright)/2;
        int lmv=renew(idx,val,nd*2,ndleft,mid);
        int rmv=renew(idx,val,nd*2+1,mid+1,ndright);
        return minarr[nd]=lmv^rmv;
    }

    int renew(int idx,int val)
    {
        return renew(idx,val,1,0,Size-1);
    }
};
int main()
{
    int n,q,i,j,t,a,b,c[100005]={};
    scanf("%d %d",&n,&q);
    for(i=0; i<n; i++)
    {
        scanf("%d",&c[i]);
    }
    seg k(c,n);
    for(i=0; i<q; i++)
    {
        scanf("%d",&t);
        if(t==1)
        {
            scanf("%d%d",&a,&b);
            k.renew(a-1,b);
        }
        if(t==2)
        {
            scanf("%d%d",&a,&b);
            printf("%d\n",k.qu(a-1,b-1));
        }
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,cnt1=0,cnt2=0,i,j,sw1=0,sw2=0;
    scanf("%lld %lld",&a,&b);
    for(i=1; i*i<a-1; i++)
    {
        cnt1+=(a-1)/i;
    }
    if(i*i==a-1)
    {
        cnt1=cnt1*2+1;
        cnt1-=i*i;
    }
    else cnt1=cnt1*2-(i-1)*(i-1);
    for(i=1; i*i<b; i++)
    {
        cnt2+=b/i;
    }
    if(i*i==b)
    {
        cnt2=cnt2*2+1;
        cnt2-=i*i;
    }
    else cnt2=cnt2*2-(i-1)*(i-1);
    printf("%lld",cnt2-cnt1);
    return 0;
}*/
//약수 업그레이드(y=[n/x] 그래프 활용)
/*#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,cnt1=0,cnt2=0,i,j,sw1=0,sw2=0;
    scanf("%lld %lld",&a,&b);
    for(i=1; i*i<a-1; i++)
    {
        cnt1+=(a-1)/i;
    }
    cnt1=cnt1*2-(i-1)*(i-1);
    if(i*i==a-1) cnt1++;
    for(i=1; i*i<b; i++)
    {
        cnt2+=b/i;
    }
    cnt2=cnt2*2-(i-1)*(i-1);
    if(i*i==b) cnt2++;
    printf("%lld",cnt2-cnt1);
    return 0;
}*/
//빨간, 파란 점 연결(0 point)
/*#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<unsigned long long, unsigned long long> pii;

bool visit[40005];
vector<pii> v[40005];

void prim(int start)
{
    visit[start]=true;
    priority_queue<pii, vector<pii>, greater<pii> > pq;
    for(int i=0;i<v[start].size();i++)
    {
        int next=v[start][i].first;
        int nextcs=v[start][i].second;

        pq.push(pii(nextcs,next));
    }
    unsigned long long res=0;
    while(!pq.empty())
    {
        int h=pq.top().second;
        int hc=pq.top().first;
        pq.pop();
        if(visit[h]) continue;
        visit[h]=true;
        res+=hc;
        for(int i=0;i<v[h].size();i++)
        {
            int t=v[h][i].first;
            int tc=v[h][i].second;
            pq.push(pii(tc,t));
        }
    }
    if(res==0) printf("-1");
    else printf("%d",res);
}

int main()
{
    int R,B,rx[205]={},ry[205]={},bx[205]={},by[205]={},i,j,cnt=0;
    scanf("%d %d",&R,&B);
    for(i=0;i<R;i++)
    {
        scanf("%d %d",&rx[i],&ry[i]);
    }
    for(i=0;i<B;i++)
    {
        scanf("%d %d",&bx[i],&by[i]);
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<B;j++)
        {
            int from,to,val;
            from=i;
            to=R+j;
            val=abs(rx[i]-bx[j])+abs(ry[i]-by[j]);
            v[from].push_back(pii(to,val));
            v[to].push_back(pii(from,val));
        }
    }
    prim(1);
    return 0;
}*/
//카트라이더 경험치 (43 points get)
/*#include<stdio.h>

int n,res=0,a[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},d[16][16];

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void answer()
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum+=d[a[i]][a[j]];
        }
    }
    if(res<sum) res=sum;
}

void f(int k,int r){
    if(r==0)
    {
        answer();
        return ;
    }
    for(int i=k-1;i>=0;i--){
        swap(&a[i],&a[k-1]);
        f(k-1,r-1);
        swap(&a[i],&a[k-1]);
    }
}

int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&d[i][j]);
        }
    }
    f(n,n);
    printf("%d",res);
    return 0;
}*/
//VIP 쿠폰(0 point)
/*#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int,int> > a;
vector<int> v;

bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    int n,i,j,res=0,maxday=0,t1,t2;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&t1,&t2);
        a.push_back(make_pair(t1,t2));
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        v.push_back(a[i].second);
        maxday=a[i].second;
        for(j=i+1;j<a.size();j++)
        {
            int k=v[v.size()-1];
            printf("before %d,%d maxd : %d k : %d\n",a[j].first,a[j].second,maxday,k);
            if(a[j].first>maxday&&maxday<k+a[j].second)
            {
                maxday=k+a[j].second;
                if(res<maxday) res=maxday;
                maxday-=a[j].second;
            }
            printf("after %d,%d maxd : %d k : %d\n",a[j].first,a[j].second,maxday,k);
            v.push_back(maxday);
        }
    }
    printf("%d",res);
    return 0;
}*/
//VIP 쿠폰(lower_bound version. 17 points get)
/*#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

typedef pair<int, int> pii;

vector<pair<int, int> > a;
vector<int> v;
int n,res=0,maxday=0,t1,t2,check[1005];

bool comp(const pii &a,const pii &b)
{
    return a.first<b.first;
}

void f(int k)
{
    for(int i=k;i<n;i++)
    {
        if(maxday>=a[i].first||check[i]==1) continue;
        maxday+=a[i].second;
        if(res<maxday) res=maxday;
        check[i]=1;
        //printf("a(%d %d), maxday : before %d after +%d -> %d, %d(k) : %d\n",a[i].first,a[i].second,maxday-a[i].second,a[i].second,maxday,k,lower_bound(a.begin(),a.end(),pii(maxday,0),comp)-a.begin());
        f(0);
        check[i]=0;
        maxday-=a[i].second;
    }
}

int main()
{
    int i,j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&t1,&t2);
        a.push_back(make_pair(t1,t2));
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        maxday=a[i].second;
        if(res<maxday) res=maxday;
        check[i]=1;
        //printf("a(%d %d), maxday : %d, %d\n",a[i].first,a[i].second,maxday,lower_bound(a.begin(),a.end(),pii(maxday+1,0),comp)-a.begin());
        f(0);
        check[i]=0;
    }
    printf("%d",res);
    return 0;
}*/
//카트라이더 경험치(set,map version.)
/* #include<stdio.h>
#include<algorithm>
#include<set>
#include<map>
using namespace std;


set<int> h;
map<set<int>, int > dp;
int N,a[16][16];

int ans(int k);
int main()
{
    int i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        h.insert(i);
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("%d\n",ans(0));
    return 0;
}

int ans(int k)
{
    if(k==N) return 0;
    if(dp[h]) return dp[h];
    int st=0,en=0;
    set<int> remain(h);
    for(int i:remain)
    {
        st=0;
        for(int j:remain)
        {
            st+=a[i][j];
        }
        h.erase(i);
        int temp=ans(k+1)+st;
        en=en>temp?en:temp;
        h.insert(i);
    }
    return dp[h]=en;
} */
/* #include<stdio.h>
#include<algorithm>
using namespace std;
int cnt;

void hanoi(int n,int from,int to,int tmp)
{
	if(abs(from-to)==1) cnt++;
    else cnt+=2;
	if(n==1)
	{
        if(from<to)
        {
            for(int i=from;i<to;i++)
            {
                printf("%d : %c->%c\n",n,i,i+1);
            }
        }
        else
        {
            for(int i=to;i>from;i--)
            {
                printf("%d : %c->%c\n",n,i,i-1);
            }
        }
		return ;
	}
	hanoi(n-1,from,tmp,to);
	if(from<to)
    {
        for(int i=from;i<to;i++)
        {
            printf("%d : %c->%c\n",n,i,i+1);
        }
    }
    else
    {
        for(int i=to;i>from;i--)
        {
            printf("%d : %c->%c\n",n,i,i-1);
        }
    }
	hanoi(n-1,tmp,to,from);
}

int main()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	printf("%d",cnt);
	return 0;
}
 */
/* #include<stdio.h>
#include<math.h>
void hanoi(int n,int from,int to,int tmp)
{
	if(n==1)
	{
		printf("%d %d\n",from,to);
		return ;
	}
	hanoi(n-1,from,tmp,to);
	printf("%d %d\n",from,to);
	hanoi(n-1,tmp,to,from);
    return ;
}

int main()
{
	int n;
	scanf("%d",&n);
    printf("%d\n",(int)pow(2,n)-1);
    hanoi(n,1,3,2);
	return 0;
} */
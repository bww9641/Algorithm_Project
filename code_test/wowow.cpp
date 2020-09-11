#include <bits/stdc++.h>
using namespace std;
 
const int yy[] = {-1, -1, -1, 0, 1, 1, 1, 0}, xx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
 
int N, K;
short D[19][18][1<<19];
bool F[19][18][1<<19];
bool A[51][51];
 
int main()
{
    scanf("%d%d", &N, &K);
    for (int i=1;i<=K;i++){
        int r, c; scanf("%d%d", &r, &c); r--; c--;
        A[r][c] = 1;
    }
    memset(D, -1, sizeof(D));
    D[0][0][0] = 0;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++) for (int msk=0;msk<1<<N+1;msk++) if (D[i][j][msk] >= 0){
            short myv = D[i][j][msk];
            int sub = (1 << (N+1))-1;
            int nmsk = (msk << 1) & sub;
 
            int ny = i, nx = j+1;
            if (nx == N) ny++, nx = 0;
 
            if (D[ny][nx][nmsk] < myv){
                D[ny][nx][nmsk] = myv;
                F[ny][nx][nmsk] = msk>>N&1;
            }
 
            if (j > 0 && msk>>N&1 || msk>>N-1&1 || j+1 < N && msk>>N-2&1 || j > 0 && msk&1 || A[i][j]) continue;
 
            if (D[ny][nx][nmsk^1] < myv+1){
                D[ny][nx][nmsk^1] = myv+1;
                F[ny][nx][nmsk^1] = msk>>N&1;
            }
        }
    }
    short ans = 0;
    int y = N, x = 0, cur = 0;
    for (int msk=0;msk<1<<N+1;msk++){
        if (ans < D[N][0][msk]){
            ans = D[N][0][msk];
            cur = msk;
        }
    }
    printf("%d\n", ans);
    if (!ans) return 0;
    vector <pair<int, int>> arr;
    while (y != 0 || x != 0){
        if (cur&1){
            if (x > 0) arr.emplace_back(y, x-1);
            else arr.emplace_back(y-1, N-1);
        }
        int bef = cur>>1 | (F[y][x][cur] << N);
        if (x == 0) y--, x = N-1;
        else x--;
        cur = bef;
    }
    assert(arr.size() == ans);
    for (auto &p: arr) printf("%d %d\n", p.first+1, p.second+1);
}
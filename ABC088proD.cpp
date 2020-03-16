#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int,int> pint;
using ll = long long;
using VI = vector<int>;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int H,W;
string fi[110];
int dist[110][110];//BFS用

int main(){
    cin >> H >> W;
    int wnum = 0;
    for(int i=0;i<H;i++){
        cin >> fi[i];
        for(int j=0;j<W;j++){
            if(fi[i][j]=='.') ++wnum;
        }
    }
    memset(dist,-1,sizeof(dist));
    dist[0][0] = 1;
    queue<pint> que;
    que.push(pint(0,0));
    while(!que.empty()){
        pint cur = que.front();
        que.pop();
        int x = cur.first;
        int y = cur.second;
        rep(dir,4){
            int nx = x+dx[dir];
            int ny = y+dy[dir];
            if(nx<0||nx>=W||ny<0||ny>=H) continue;
            if(fi[ny][nx]=='#') continue;
            if(dist[ny][nx]==-1){
                dist[ny][nx] = dist[y][x]+1;
                que.push(pint(nx,ny));
            }
        }
    }
    if (dist[H-1][W-1] == -1) cout << -1 << endl;
    else  cout << wnum - dist[H-1][W-1] << endl;
}

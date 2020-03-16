#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int H,W;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int ans = 0;
int syokix = -1;
int syokiy = -1;
void bfs(int c,int y,int x,int d,vector<vector<char>> G){
    G[y][x] = '#';
    if(y==H-1||x==W-1||y==0||x==0){
        if(syokix==-1||syokiy==-1){} 
        else if(y!=syokiy||x!=syokix){
            chmax(ans,d);
            c++;
            if(c==3) return;
        }
    }
        rep(j,4){
            int nx = x+dx[j];
            int ny = y+dy[j];
            if(nx<0||nx>=W||ny<0||ny>=H) continue;
            cout  << "syokix:" << syokix << "syokiy:" << syokiy << ":ny:" << ny << " nx : " << nx << endl;
            if(G[ny][nx]=='#') continue;
            bfs(0,ny,nx,d+1,G);
        }
        G[y][x] = '.';
}
signed main(){
    cin >> H >> W;
    vector<vector<char>> G(H,vector<char>(W));
    rep(y,H){
        G[y].resize(W);
        rep(x,W){
            cin >> G[y][x];
        }
    }
    
    rep(y,H){
        rep(x,W){
            cout << G[y][x] << " ";
            if(G[y][x]=='#') continue;

            if(y==H-1||x==W-1||y==0||x==0){
                syokix = x;
                syokiy = y;
                bfs(0,y,x,0,G);
            }
        }
        cout << endl;
    }
    cout << ans << endl;
}
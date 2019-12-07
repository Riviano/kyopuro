#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
using Graph = vector<vector<int>>;
Graph G;
int w,h;
void dfs(int x,int y){
  cout << "x:" << x << "y:" << y << endl;
  G[y][x] = 0;
  int dx[8] = {1,1,1,0,0,-1,-1,-1};
  int dy[8] = {0,1,-1,-1,1,-1,0,1};

    rep(i,8){
      int nx = x+dx[i],ny=y+dy[i];
      if(nx>=w||ny>=h||nx<0||ny<0) continue;
      if(G[ny][nx]==1) dfs(nx,ny);
    }
}
int main(){
  cin >> w >> h;
  int count=0;
  G.resize(h,vector<int>(w));
  rep(i,h){
    rep(j,w){
      cin >> G[i][j];
    }
  }
  rep(i,h){
    rep(j,w){
      if(G[i][j]==1){
        count++;
        dfs(j,i);
      }
    }
  }
  cout << count << endl;
}

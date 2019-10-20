#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int h,w;cin >> h >> w;
  vector<string> a(h);
  rep(i,h){
    string k;cin >> k;
    a[i] = k;
  }
  const int dx[8]={-1,0,1,-1,1,-1,0,1};
  const int dy[8]={1,1,1,0,0,-1,-1,-1};
  rep(i,h){
    rep(j,w){
      if(a[i][j]=='#') continue;
      int num = 0;
      for(int d=0;d<8;d++){
        const int ni = i + dy[d];
        const int nj = j + dx[d];

        if(ni<0||h<=ni) continue;
        if(nj<0||w<=nj) continue;
        if(a[ni][nj]=='#') num++;
      }
      a[i][j] = char(num+'0');
    }
  }
  for(int i=0;i<h;i++) cout << a[i] << endl;
}

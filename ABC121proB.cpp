#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int n,m,c;cin >> n >> m >> c;
  int ans = 0;
  int b[m];
  rep(i,m) cin >> b[i];
  int a[n][m];
  rep(i,n){
    rep(j,m){
      cin >> a[i][j];
    }
  }
  rep(i,n){
    int s = c;
    rep(j,m){
      s+= a[i][j]*b[j];
    }
    if(s>0) ans++;
  }
  cout << ans << endl;
}

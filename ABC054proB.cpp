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

int main(){
  int n,m;cin >> n >> m;
  vector<vector<char>> a(n,vector<char>(n));
  vector<vector<char>> b(m,vector<char>(m));
  for(auto&i:a){
    for(auto&j:i) cin >> j;
  }
  for(auto&i:b){
    for(auto&j:i) cin >> j;
  }
  bool flag = false;
  rep(i,n){
    rep(j,n){
      flag = false;
      if(a[i][j]==b[0][0]&&j+m<=n&&i+m<=n){
        rep(s,m){
          rep(t,m){
            if(a[i+s][j+t]==b[s][t]) flag = true;
            else flag = false;
            if(!flag) break;
          }
          if(!flag) break;
        }
        if(flag){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;

}

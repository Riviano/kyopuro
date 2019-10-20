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
  int n;cin >> n;
  vector< vector<int> > a (2, vector<int>(n) );

  rep(i,2){
    rep(j,n){
      cin >> a[i][j];
    }
  }
  int su=0;
  vector<int> sum(n);
  rep(i,n){
    su+=a[0][i];
    sum[i] = su;
  }
  int ans = 0;
  for(int i=0;i<n;i++){
    int an = sum[i];
    for(int j=i;j<n;j++){
      an+=a[1][j];
    }
    ans = max(ans,an);
  }
  cout << ans << endl;
}

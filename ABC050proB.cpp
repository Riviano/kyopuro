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
  int t[n];
  rep(i,n) cin >> t[i];
  int m;cin >> m;

  rep(i,m){
    int p,x;cin >> p >> x;
    int ans = 0;
    rep(i,n){
      ans+=(i==p-1?x:t[i]);
    }
    cout << ans << endl;
  }
}

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

signed main(){
  Int n,t,a;cin >> n >> t >> a;
  vector<Int> h(n);
  for(Int i=0;i<n;i++) cin >> h[i];
  t*=1000;a*=1000;
  auto calc=[&](Int x){return abs((t-x*6)-a);};
  Int ans = 0;
  for(Int i=0;i<n;i++){
    if(calc(h[i])<calc(h[ans])) ans = i;
  }
  cout << ans+1 << endl;
}

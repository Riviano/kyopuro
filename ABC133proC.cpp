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
  Int l,r;cin >> l >> r;
  Int ans = INF;
  if(r-l>2020){cout << 0 << endl;return 0;}
  for(Int i=l;i<r;i++){
    for(Int j=i+1;j<=r;j++){
      ans=min(ans,i*j%2019);
    }
  }
  cout << ans << endl;
}

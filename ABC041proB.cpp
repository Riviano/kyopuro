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
const int MOD = 1e9+7;
int main(){
  Int a,b,c;cin >> a >> b >> c;
  Int ans;
  ans = a*b%MOD;
  ans = (ans*c)%MOD;
  cout << ans << endl;
}

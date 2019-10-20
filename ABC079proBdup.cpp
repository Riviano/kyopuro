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
Int m[90];
Int lu(Int i){
  if(~m[i]) return m[i];
  if(i>=2) return m[i] = lu(i-1)+lu(i-2);
  if(i==0) return m[i] = 2;
  if(i==1) return m[i] = 1;
}

signed main(){
  memset(m,-1,sizeof(m));
  Int n;
  cin >> n;
  cout << lu(n) << endl;
}

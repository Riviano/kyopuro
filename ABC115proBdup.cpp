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
  Int n;cin >> n;
  vector<Int> a(n);
  for(Int i=0;i<n;i++) cin >> a[i];
  sort(a.rbegin(),a.rend());
  Int ans = 0;
  for(Int i=0;i<n;i++) ans+=a[i];
  ans-=a[0]/2;
  cout << ans << endl;
  return 0;
  
}

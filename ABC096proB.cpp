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
  int a[3];
  rep(i,3) cin >> a[i];
  sort(a,a+3);
  int k;cin >> k;
  int ans = a[2];
  ans = ans*pow(2,k);
  cout << ans+a[0]+a[1] << endl;
}

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
  int n,k;cin >> n >> k;
  int ans = 0;
  vector<int> a(n);
  for(auto &i:a) cin >> i;
  sort(a.rbegin(),a.rend());
  for(int i=0;i<k;i++){
    ans += a[i];
  }
  cout << ans << endl;
}

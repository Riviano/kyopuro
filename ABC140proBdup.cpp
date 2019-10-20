#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;cin >> n;
  vector<ll> a(n),b(n),c(n-1);
  rep(i,n) cin >> a[i],--a[i];
  rep(i,n) cin >> b[i];
  rep(i,n-1) cin >> c[i];
  ll ans = 0;
  rep(i,n){
    ans+=b[a[i]];
    if(i&&a[i]==a[i-1]+1) ans+=c[a[i-1]];
  }
  cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define INF 999999999
using ll = long long;
using VI = vector<int>;
typedef long long int Int;
int main(){
  ll n;cin >> n;

  VI ue(n),tyuu(n),sita(n);
  rep(i,n) cin >> ue.at(i);
  rep(i,n) cin >> tyuu.at(i);
  rep(i,n) cin >> sita.at(i);
  sort(ue.begin(),ue.end());
  sort(sita.begin(),sita.end());
  sort(tyuu.begin(),tyuu.end());
    ll ans = 0;

    rep(i,n) {
        long long int x = lower_bound(ue.begin(),ue.end(),tyuu[i]) - ue.begin();
        long long int y = n-(upper_bound(sita.begin(), sita.end(),tyuu[i]) - sita.begin());
        ans += x * y;
    }
    cout << ans << endl;
}

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
#define debug(x) cerr << #x << ": " << x << '\n'
int main(){
  Int n;cin >>n;
  Int t,a;cin >> t >> a;
  Int ans = -1;
  Int min=999999999;
  rep(i,n){
    Int h;cin >> h;
    Int kion = t*1000-(h*6);
    if(min>abs(kion-a*1000)){
      min = abs(kion-a*1000);
      ans = i+1;
    }
  }
  debug(ans);
  cout << ans << endl;
}

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
  int n;cin >> n;
  vector<int> a(n);
  for(auto &i:a) cin >> i;
  bool flag = true;
  int ans = 0;
  while(1){
    for(auto&i:a){
      if(i&1||i==0) flag = false;
    }
    if(!flag){
      cout << ans << endl;
      return 0;
    }
    rep(i,n) a[i]/=2;
    ans++;
  }
}

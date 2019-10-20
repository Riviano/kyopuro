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
  int n;cin >> n;
  int sq = sqrt(n);
  int ans = INF;
  for(int i=sq;i<=n;i++){
    int r=n/i;
    int sa = abs(r-i);
    int amari = n%(r*i);
    ans=min(ans,amari+sa);
  }
  cout << ans << endl;
}

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
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main(){
  Int n;
  string s;cin >> n >> s;
  Int ans = 0;
  for(Int i=1;i<n;i++){
    string a=s.substr(0,i);
    string b=s.substr(i);
    set<char> x(a.begin(),a.end()),y(b.begin(),b.end());
    Int res = 0;
    for(char c:x) res+=y.count(c);
    chmax(ans,res);
  }
  cout << ans << endl;
  return 0;
}

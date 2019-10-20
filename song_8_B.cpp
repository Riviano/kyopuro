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
  int a,b,c,x;cin >> a >> b >> c >> x;
  int ans = 0;
  rep(i,a+1){
    rep(j,b+1){
      rep(k,c+1){
        if(500*i+100*j+50*k==x) ans++;
      }
    }
  }
  cout << ans << endl;
}

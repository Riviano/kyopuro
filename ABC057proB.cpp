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
  int m;cin >> m;
  int a[n][2];
  rep(i,n){
    cin >> a[i][0];
    cin >> a[i][1];
  }

  int b[m][2];
  rep(i,m){
    cin >> b[i][0];
    cin >> b[i][1];
  }

  rep(i,n){
    Int count = INF;
    Int an = INF;
    Int ans = 0;
    rep(j,m){
      count = abs(a[i][0]-b[j][0])+abs(a[i][1]-b[j][1]);
      //debug(count);
      if(an>count){
        an = count;
        ans = j+1;
      }
    }
  cout << ans << endl;
  }
}

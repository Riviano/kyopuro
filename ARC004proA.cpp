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
  int a[n][2];
  rep(i,n){
    rep(j,2){
      int t;cin >> t;
      a[i][j] = t;
    }
  }
  int ans = 0;
  int count = 0;
  rep(i,n-1){
    REP(j,i+1,n){
      count = abs(a[i][0]-a[j][0])*abs(a[i][0]-a[j][0])+abs(a[i][1]-a[j][1])*abs(a[i][1]-a[j][1]);
      ans = max(ans,count);
    }
  }
  double an = sqrt(ans);
  cout << an << endl;
}

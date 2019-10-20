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
int gcd(Int a, Int b) {
  return b != 0 ? gcd(b, a % b) : a;
}
int lcm(Int a, Int b) {
  return a / gcd(a, b)*b;
}
bool isSquare(Int a){
  bool flag = false;
  double z = double(sqrt(a));
  if(ceil(z)==floor(z)) flag = true;
  return flag;
}
int main(){
  int n,d;cin >> n >> d;
  vector<vector<int>> a(n, vector<int>(d));
  rep(i,n){
    rep(j,d){
      cin >> a[i][j];
    }
  }
  int ans = 0;
  rep(i,n){
    REP(j,i+1,n){
      int dd = 0;
      rep(k,d) dd+= abs(a[i][k]-a[j][k]) * abs(a[i][k]-a[j][k]);
      if(isSquare(dd)) ans++;
    }
  }

  cout << ans << endl;


}

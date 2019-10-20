#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define INF 999999999
typedef long long ll;
using VI = vector<int>;
using Int = long long int;
ll gcd(ll a,ll b){
  return b ? gcd(b,a%b) : a;
}
ll lcm(ll a,ll b){
  return a/gcd(a,b)*b;
}//なんでa*b/gcd(a,b)じゃないの？

int main(){
  int n;cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  ll m =a[0];
  rep(i,n) m = lcm(m,a[i]);
  cout << m << endl;
}

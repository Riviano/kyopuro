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

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a==b&&b==c) cout << 1 << endl;
  else if(a==b||b==c||a==c) cout << 2 << endl;
  else cout << 3 << endl;
  return 0;
}

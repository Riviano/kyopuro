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
Int gcd(Int a, Int b) {
 return b != 0 ? gcd(b, a % b) : a;
}//gcd

Int lcm(Int a, Int b) {
 return a / gcd(a, b)*b;
}//lcm
int main(){

  Int a,b,c,d;cin >> a >> b >> c >> d;
  Int ga=a-(a/c+a/d-(a/lcm(c,d)));
  Int gb = b-(b/c+b/d-b/(lcm(c,d)));
  if(a%c) gb++;
  cout << gb - ga << endl;
  return 0;
}

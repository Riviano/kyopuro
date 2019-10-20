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
  int a[3],b[3];
  rep(i,3){
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b,b+3,greater<int>());
  map<int,int> m;
  rep(i,3) m[b[i]] = i+1;
  rep(i,3) cout << m[a[i]] << endl;
  return 0;
}

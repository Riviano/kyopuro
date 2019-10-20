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
  int n;cin >> n;
  vector<int> a(n);
  vector<int> b(n,1);
  int koubai;
  rep(i,n){
    cin >> a[i];
    if(i==0) koubai=a[0];
    koubai=lcm(koubai,a[i]);
  }
   int z=0;
  rep(i,n){
    b[i]=koubai/a[i];
    z+=b[i];
  }
  cout << double(koubai)/double(z) << endl;
}

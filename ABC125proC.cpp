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
int gcd(Int a, Int b) {
 return b != 0 ? gcd(b, a % b) : a;
}//gcd


int main(){
  int n;cin >> n;
  vector<Int> a(n,-1),b(n,-1);//aは与えられた配列,bはその伏字を含まないGCD
  vector<Int> left(n,-1),right(n,-1);//左からのgcd累積(left),右から...
  rep(i,n){
    cin >> a[i];
  }
  int ldata = a[0];
  left[0] = a[0];
  REP(i,1,n){
    ldata = gcd(ldata,a[i]);
    left[i] = ldata;
  }
    int rdata = a[n-1];
    right[n-1] = a[n-1];
  for(int i=n-1;i>=0;i--){
    rdata = gcd(rdata,a[i]);
    right[i] = rdata;
  }
  /*cout << endl;
  rep(i,n) cout << left[i] << endl;
  cout << endl << endl;
  rep(i,n) cout << right[i] << endl;
*/
  b[n-1] = left[n-2];
  b[0] = right[1];
  REP(i,1,n-1){
    b[i] = gcd(left[i-1],right[i+1]);
  }
  sort(b.begin(),b.end());
  cout << b[n-1] << endl;
  return 0;
}

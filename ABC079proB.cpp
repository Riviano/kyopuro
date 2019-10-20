#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;
int main(){
  int n;cin >> n;
  vector<Int> a(n+1,0);
  a[0] = 2;
  a[1] = 1;
  for(int i=2;i<n+1;i++){
    a[i] = a[i-2]+a[i-1];
  }
  cout << a[n] << endl;
}

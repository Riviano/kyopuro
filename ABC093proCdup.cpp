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
  int a,b,c;cin >> a >> b >> c;
  int ma = max({a,b,c}),sum = a+b+c;
  if((3*ma-sum)%2==0) cout << (3*ma-sum)/2 << endl;
  else cout << ((3*ma-sum)/2)+2 << endl;
  return 0;
}

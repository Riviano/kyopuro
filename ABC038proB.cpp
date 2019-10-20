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
  int h1,w1,h2,w2;cin >> h1 >> w1 >> h2 >> w2;
  if(h1==h2||h1==w2||w1==h2||w1==w2) cout << "YES" << endl;
  else cout << "NO" << endl;
}

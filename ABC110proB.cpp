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
  int N,M,X,Y;cin >> N >> M >> X >> Y;
  int x[N],y[M];
  rep(i,N) cin >> x[i];
  rep(i,M) cin >> y[i];
  sort(x,x+N);
  sort(y,y+M);
  bool ans = false;
  for(int i=X+1;i<=Y;i++){
    if(x[N-1]<i&&y[0]>=i) ans = true;
  }
  cout << (ans?"No War":"War") << endl;
}

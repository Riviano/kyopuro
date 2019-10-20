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
  double w,h,x,y;cin >>w >> h >> x >> y;
  if(w/2==x&&h/2==y){cout << w*h/2 << " " << 1 << endl;return 0;}
  else if(w/2==x||h/2==y){cout << w*h/2 << " " << 0 << endl;return 0;}
  else cout << w*h/2 << " " << 0 << endl;
}

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
  int w,h,n,a,x,y;
  int k=0,ax=0,ay=0,bx,by;
  cin >> w >> h >> n;
  bx = w;by = h;
  for(int i=0;i<n;i++){
    cin >> x >> y >> a;
    switch (a) {
      case 1:
      ax = max(ax,x);
      break;
      case 2:
      bx = min(bx,x);
      break;
      case 3:
      ay = max(ay,y);
      break;
      case 4:
      by = min(by,y);
      break;
      default:
      break;
    }
  }
  if(ax<bx&&ay<by) k=(bx-ax)*(by-ay);
  cout << k << endl;
}

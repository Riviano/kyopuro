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
  int x[4],y[4];
  for(int i =0;i<2;i++){
    cin >> x[i] >> y[i];
  }
  int xs=x[1]-x[0];
  int ys=y[1]-y[0];
  x[2]=x[1]-ys;
  y[2]=y[1]+xs;
  x[3]=x[2]-xs;
  y[3]=y[2]-ys;
  for(int i=2;i<4;i++){
    cout << x[i] << " ";
    cout << y[i] << (i==3?"\n":" ");
  }
}

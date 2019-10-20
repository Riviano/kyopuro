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
  int n,m,x;cin >> n >> m >> x;
  int a[n+1] = {0};
  for(int i=0;i<m;i++){
    int k;cin >> k;
    a[k] = 1;
  }
  /*for(int i=0;i<n+1;i++){
    cout << a[i] << endl;
  }*/
  int lans = 0;
  int rans = 0;
  for(int i=0;i<x;i++) lans+=a[i];
  for(int i=x;i<n+1;i++) rans += a[i];
  cout << min(lans,rans) << endl;

}

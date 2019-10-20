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
  int n,m;cin >> n >> m;
  vector<pair<int,int>> k(n);
  rep(i,m){
    int a,b;cin >> a >> b;
    if(a==1){
      k[b-1].first = 1;
    }
    if(b==n){
      k[a-1].second = 1;
    }
  }
  rep(i,k.size()){
    if(k[i].first==1&&k[i].second==1){cout << "POSSIBLE" << endl;return 0;}
  }
  cout << "IMPOSSIBLE" << endl;

}

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
  int n,a,b;cin >> n >> a >> b;
  int ans = 0;
  rep(i,n+1){
    string x = to_string(i);
    int q=0;
    for(int t=0;t<x.size();t++){
      q+= x[t]-'0';
    }
    if(a<=q&&q<=b) ans += i;
  }
  cout << ans << endl;
}

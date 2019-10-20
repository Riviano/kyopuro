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
  int n,x;cin >> n >> x;
  vector<int> m(n);
  int ans = 0;
  for(auto&i:m) cin >> i;
  sort(m.begin(),m.end());
  for(int i=0;i<n;i++){
    if(x>=m[i]){
      ans++;
      x-=m[i];
    }
  }
  ans+=x/m[0];
  cout << ans << endl;
}

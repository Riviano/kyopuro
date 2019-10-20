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
  int n;cin >> n;
  vector<int> a(n);
  int ans =-1;
  for(auto &i:a) cin >> i;
  for(int i=0;i<n-1;i++){
    for(int j=i;j<n;j++){
      ans = max(ans,abs(a[i]-a[j]));
    }
  }
  cout << ans << endl;
}

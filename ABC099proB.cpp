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
  vector<Int> a(999);
  Int x,y;cin >> x >> y;
  Int ans = 0;
  for(int i=1;i<=999;i++){
    ans += i;
    a[i-1] = ans;
  }
  for(int i=0;i<998;i++){
    if(a[i]>=x&&a[i+1]>=y){
      if((a[i]-x)==(a[i+1]-y)){
        ans = a[i]-x;
        cout << ans << endl;
        return 0;
      }
    }
  }
}

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
  int ans = 0;
  for(int i=1;i<=n;i+=2){
    int count = 0;
    for(int j=1;j<=i;j++){
      if(i%j==0) count++;
    }
    if(count==8) ans++;
  }
  cout << ans << endl;
}

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
  int x;cin >> x;
  int ans = 1;
  for(int b=1;b<=x;b++){
    for(int p=2;p<=x;p++){
      int k = pow(b,p);
      if(k<=x){
        ans = max(ans,k);
      }
    }
  }
  cout << ans << endl;
}

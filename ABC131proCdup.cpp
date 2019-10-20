#include<bits/stdc++.h>
using namespace std;
using Int = long long;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  Int a,b,c,d;cin >> a >> b >> c >> d;
  auto mlcm=[](Int p,Int q){return p/__gcd(p,q)*q;};
  auto calc = [&](Int x){
    Int p = x/c;
    Int q = x/d;
    Int r = x/mlcm(c,d);
    return x-p-q+r;
  };
  cout << calc(b)-calc(a-1) << endl;
  return 0;
}

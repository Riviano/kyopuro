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
  Int k;cin >> k;
  for(Int n=2;n<=50;n++){
    Int max = n-1+n*k;
    if(n-1>k){
      cout << n << endl;
      rep(i,n-1){
        cout << 0 << " ";
      }
      cout << max << endl;
      return 0;
    }
  }
}

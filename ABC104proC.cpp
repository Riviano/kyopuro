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
int d;
Int g;
vector<Int> p,c;
int main(){
  cin >> d >> g;
  p.resize(d);c.resize(d);
  rep(i,d) cin >> p[i] >> c[i];
  Int res = 1<<29;
  for(int bit=0;bit<(1<<d);bit++){
    Int sum = 0;
    Int num = 0;
    for(int i=0;i<d;i++){
      if(bit&(1<<i)) sum+=c[i]+p[i]*100*(i+1),num+=p[i];
    }
    if(sum>=g) res = min(res,num);
    else{
      for(int i=d-1;i>=0;i--){
        if(bit&(1<<i)) continue;
        for(int j=0;j<p[i];j++){
          if(sum>=g) break;
          sum+=100*(i+1);
          ++num;
        }
      }
      res=min(res,num);
    }
  }
  cout << res << endl;
}

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
  int m;cin >> m;
  if(m<100){
    cout << "00" << endl;
    return 0;
  }
  else if(m>=100&&m<=5000){
    double vv = m/100;
    if(log10(vv)<1){cout << 0 << vv << endl;return 0;}
    else cout << vv << endl;
    return 0;
  }
  else if(m>=6000&&m<=30000){
    cout << m/1000+50 << endl;
    return 0;
  }
  else if(m>=35000&&m<=70000){
    cout << (m/1000-30)/5+80 << endl;
    return 0;
  }
  else if(m>70000){
    cout << 89 << endl;
    return 0;
  }
}

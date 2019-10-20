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
  double a,b;cin >> a >> b;
  if(a>b){
    cout << "GREATER" << endl;
    return 0;
  }
  if(a<b){
    cout << "LESS" << endl;
    return 0;
  }
  else cout << "EQUAL" << endl;
  return 0;
}

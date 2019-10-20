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
  int n,y;cin >> n >>y;
  for(int man=0;man<=n;man++){
    int a = n-man;
    for(int gosen=0;gosen<=n;gosen++){
      int b=a-gosen;
      if(b<0) continue;
      if(10000*man+5000*gosen+b*1000==y){
        cout << man << " " << gosen << " " << b << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
}

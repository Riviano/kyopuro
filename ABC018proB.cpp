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
  string s;cin >> s;
  int n;cin >> n;
  rep(i,n){
    int l,r;cin >> l >> r;l--;r--;
    for(int j=0;j<((r-l)+1)/2;j++){
      int tmp = s[l+j];
      s[l+j] = s[r-j];
      s[r-j] = tmp;
    }
  }
  cout << s << endl;
}

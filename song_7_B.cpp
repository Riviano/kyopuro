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
  set<Int> st;
  Int a,b,k;cin >> a >> b >> k;
  for(Int i=0;i<k;i++) if(a<=i+a&&i+a<=b) st.insert(i+a);
  for(Int i=0;i<k;i++) if(a<=b-i&&b-i<=b) st.insert(b-i);
  for(auto &i:st) cout << i << endl;
}

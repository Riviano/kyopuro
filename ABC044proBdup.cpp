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
  int c[26] = {};
  bool f = true;
  string w;cin >> w;
  int i;
  for(i=0;i<w.size();i++) c[w[i]-'a']++;
  for(i=0;i<26;i++) f&=(c[i]%2==0);
  cout << (f?"Yes":"No") << endl;
  return 0;
}

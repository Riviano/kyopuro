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
  int a,b;cin >> a >> b;
  string s;cin >> s;
  int lc=0,rc=0;
  bool tyu = false;
  for(int i=0;i<s.size();i++){
    if(s[i]=='-'){
      tyu = true;
    }else{
      if(tyu){
        rc++;
      }else{
        lc++;
      }
    }
  }
  if(lc==a&&rc==b) cout << "Yes" << endl;
  else cout << "No" << endl;
}

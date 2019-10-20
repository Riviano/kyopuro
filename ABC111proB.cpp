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
  string s;cin >> s;
  bool flag = false;
  int ans = s[0]-'0';
  if(s[0]<s[1]) flag = true;
  else{
    if(s[0]<s[2]) flag = true;
  }
  if(flag){
    ans++;
    cout << ans << ans << ans << endl;
  }
  else{
    cout << ans << ans << ans << endl;
  }
}

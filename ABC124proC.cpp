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
  int flag = (s[0])-'0';
  int ans = 0;
  REP(i,1,s.size()){
    if((flag+'0')==s[i]){
      flag = 1-flag;
      s[i] = flag+'0';
      ans++;
    }
  flag = s[i]-'0';
  }
  cout << ans << endl;
}

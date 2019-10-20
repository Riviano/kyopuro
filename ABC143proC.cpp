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
  int n;cin >> n;
  string s;cin >> s;
  vector<int> a(s.size(),0);
  int flag = 0;
  int ans = 0;
  char f;
  f = s[0];
  REP(i,0,s.size()){
    if(s[i]==f){
      continue;
    }
    else {
      ans++;
      f = s[i];
    }
  }
  cout << ans+1 << endl;

}

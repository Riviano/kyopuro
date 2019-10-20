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
  string ans;
  int co = 0;
  rep(i,s.size()-1){
    if(s[i]==s[i+1]){
      co++;
    }
    else{
      co++;
      ans.push_back(s[i]);
      ans+=to_string(co);
      co = 0;
    }
  }
  ans.push_back(s[s.size()-1]);
  co++;
  ans+=to_string(co);
  cout << ans << endl;
}

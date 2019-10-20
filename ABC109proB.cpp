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
  int n;cin >> n;
  map<string,int> mp;
  vector<string> s(n);
  bool flag = true;
  rep(i,n){
    string k;cin >> k;
    mp[k]++;
    s[i] = k;
  }
  for(auto &i:mp) if(i.second!=1) flag = false;
  if(!flag){
    cout << "No" << endl;
    return 0;
  }
  char t=s[0].back();
  REP(i,1,n){
    if(s[i].front()!=t) flag = false;
    t=s[i].back();
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int n,m;cin >> n >> m;
  map<string,int> mp;
  for(int i=0;i<n;i++){
    int t;cin >> t;
    for(int j=0;j<t;j++){
      string s;cin >> s;
      mp[s]++;
    }
  }
  Int ans = 0;
  for(auto &i:mp){
    if(i.second==n) ans++;
  }
  cout << ans << endl;
}

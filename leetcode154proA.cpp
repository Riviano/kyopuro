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
  string a,b,c;cin >> a >> b >> c;
  map<char> mp;
  for(auto& i:c) mp[i]++;
  int ans = 0;
  while(1){
    if(mp['b']>0&&mp['a']>0&&mp['l']>1&&mp['o']>1&&mp['n']>0){
      mp['b']--;
      mp['a']--;
      mp['l']-=2;
      mp['o']-=2;
      mp['n']--;
      ans++;
    }
    else{
      cout << ans << endl;
      return 0;
  }
}

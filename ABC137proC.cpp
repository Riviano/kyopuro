#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
typedef long long int Int;
typedef long long ll;
int main(){
  int n;cin >> n;
  map<string,int> mp;
  rep(i,n){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    mp[s]++;
  }
  Int ans=0;
  for(auto& i:mp){
    int s = i.second;
    ans+= (ll)s*(s-1)/2;
  }
  cout << ans << endl;
  return 0;
}

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
  map<string,int> mp;
  int ans = 0;
  string s,t;
  rep(i,n){
    cin >> s;
    mp[s]++;
    if(mp[s]>ans) t=s,ans=mp[s];
  }
  cout << t << endl;
  return 0;
}

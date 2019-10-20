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
  map<char,int> mp;
  for(auto &i:s){
    mp[i]++;
    if(mp[i]>1){
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl;
}

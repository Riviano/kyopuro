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
  string k;cin >> k;
  if(s.find(k)!=string::npos){
    cout << "Yes" << endl;
    return 0;
  }

  for(int i=0;i<s.size();i++){
    string t = s[s.size()-1]+s.substr(0,s.size()-1);
    //cout << t << endl;
    s = t;
    if(s.find(k)!=string::npos){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}

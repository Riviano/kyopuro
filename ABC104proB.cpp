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
  bool flag = true;
  if(s[0]!='A') flag = false;
  int count = 0;
  for(int i=2;i<s.size()-1;i++){
    if(s[i]=='C') count++;
  }
  if(count!=1) flag = false;
  count = 0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A'||s[i]=='C') continue;
    if(!('a'<=s[i]&&s[i]<='z')) count++;
  }
  if(count>0) flag = false;
  if(flag) cout << "AC" << endl;
  else cout << "WA" << endl;
}

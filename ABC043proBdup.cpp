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
  stack<int> t;
  string s;cin >> s;
  int i;
  for(i=0;i<s.size();i++){
    if(s[i]=='B'){
      if(!t.empty()) t.pop();
    }else t.push(s[i]-'0');
  }
  vector<int> v;
  while(!t.empty()) i=t.top(),t.pop(),v.push_back(i);
  reverse(v.begin(),v.end());
  for(i=0;i<v.size();i++) cout << v[i];
  cout << endl;
  return 0;
}

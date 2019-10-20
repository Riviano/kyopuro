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
  bool flag = false;
  rep(i,s.size()-1){
    if(s[i]=='o'||s[i]=='k'||s[i]=='u'||flag){flag=false;continue;}
    if(i+1<=s.size()-1){
      if(s[i]=='c'&&s[i+1]=='h'){flag=true;continue;}
      else{cout << "NO" << endl;return 0;}
    }
    else{cout << "NO" << endl;return 0;}
  }
  cout << "YES" << endl;
  return 0;
}

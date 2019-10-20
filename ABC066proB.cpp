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
  string a;
  string b;
  int ans = 0;
  bool flag = false;
  do{
    s.pop_back();
    if(!(s.size()&1)){
      a = s.substr(0,s.size()/2);
      b = s.substr(s.size()/2,s.size()/2);
      if(a==b){
        flag = true;
        ans = a.size()*2;
      }
    }
  }while(!flag);
  cout << ans << endl;
}

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
  string s;cin >> s;
  string k = "b";
  int cnt = 1;
  if(s.size()%2==0){cout << -1 << endl;return 0;}
  while(k.size()!=s.size()){
    if(cnt%3==1){
      k.insert(0,"a");
      k+="c";
    }
    else if(cnt%3==2){
      k.insert(0,"c");
      k+="a";
    }
    else if(cnt%3==0){
      k.insert(0,"b");
      k+="b";
    }
    cnt++;
  }
  if(s==k) cout << cnt-1 << endl;
  else cout << -1 << endl;
  return 0;
}

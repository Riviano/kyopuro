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
  int h,w;cin >> h >> w;
  vector<string> a(h);
  rep(i,w+2) cout << (i==w+1?"#\n":"#");
  rep(i,h){
    string s;cin >> s;
    cout << '#' << s << '#' << endl;
  }
  rep(i,w+2) cout << (i==w+1?"#\n":"#");
}

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
inline void DeleteSpace(string &buf)
{
    size_t pos;
    while((pos = buf.find_first_of(" 　\t")) != string::npos){
        buf.erase(pos, 1);
    }
}
int main(){
  string w;cin >> w;
  int ans = 0;
  while(1){
    string t;cin >> t;
    if(t=="END_OF_TEXT") break;
    for(int i=0;i<t.size();i++){
      if('A'<=t[i]&&t[i]<='Z') t[i]+='a'-'A';
    }
    if(w==t) ans++;
  }
  cout << ans << endl;
}

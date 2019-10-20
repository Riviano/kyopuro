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
  bool flag = true;
  for(int i=0;i<s.size();i++){
    if(i&1){
      if(!(s[i]=='L'||s[i]=='U'||s[i]=='D')) flag = false;
    }
    else{
      if(!(s[i]=='R'||s[i]=='U'||s[i]=='D')) flag = false;
    }
  }
  cout << (flag?"Yes":"No") << endl;
}

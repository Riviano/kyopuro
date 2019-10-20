#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  string s;cin >> s;
  int count=0;
  int ans = 0;
  rep(i,SZ(s)){
    if(s[i]=='A'||s[i]=='C'||s[i]=='T'||s[i]=='G'){
      count++;
      ans = max(ans,count);
    }
    else{
      count = 0;
    }
  }
  cout << ans << endl;
}

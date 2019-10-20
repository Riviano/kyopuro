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
  int u=753;
  int ans=100000;
  string s;cin >> s;
  for(int i=0;i<s.size()-2;i++){
    int a=(s[i]-'0')*100;
    int b=(s[i+1]-'0')*10;
    int c=s[i+2]-'0';
    int t=a+b+c;
    ans = min(ans,abs(u-t));
  }
  cout << ans << endl;
}

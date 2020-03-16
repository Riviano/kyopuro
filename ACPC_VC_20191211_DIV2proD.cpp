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
  Int n;cin >> n;
  vector<Int> a(n),t(n);
  for(auto &i:t) cin >> i;
  for(auto &i:a) cin >> i;
  if(a[0]!=t[n-1]){
    cout << 0 << endl;
  }else{
    Int ans = 1;
    for(int i=1;i<n-1;i++){
      if(t[i]==t[i-1]&&a[i]==a[i+1]){
        ans*=min(t[i],a[i]);
        ans%=MOD;
      }
      else if(t[i]>t[i-1]&&a[i]==a[i+1]&&a[i]<t[i]){
        ans = 0;
      }
      else if(t[i]==t[i-1]&&a[i]>a[i+1]&&a[i]>t[i]){
        ans = 0;
      }
      else if(t[i]>t[i-1]&&a[i]>a[i+1]&&a[i]!=t[i]){
        ans = 0;
      }
    }
  }
}

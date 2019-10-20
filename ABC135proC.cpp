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
  Int ans=0;
  vector<Int> a(n+1),b(n);
  for(auto &i:a) cin >> i;
  for(auto &i:b) cin >> i;
  for(Int i=0;i<n;i++){
    if(a[i]>=b[i]){ans+=b[i];}
    else{
      ans+=a[i];
      b[i]-=a[i];
      if(a[i+1]>=b[i]){a[i+1]-=b[i];ans+=b[i];}
      else{ans+=a[i+1];a[i+1]=0;}
    }
  }
  cout << ans << endl;
}

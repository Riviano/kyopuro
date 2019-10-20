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
  vector<int> a(n);
  for(auto &i:a) cin >> i;
  int ans = 0;
  bool flag = false;
  sort(a.begin(),a.end());
  for(int i=2;i<=a[n-1];i*=2){
    for(auto &t:a) if(t%i!=0) flag = true;
    if(!(flag)) ans++;
    else break;
  }
  cout << ans << endl;
}

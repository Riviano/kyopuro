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
  int x,y,z;//a,b,c
  int ans = 0;
  for(auto &i:a) cin >> i;
  sort(a.begin(),a.end());
  for(int i=0;i<=n-3;i++){
    for(int j = i+1;j<=n-2;j++){
      for(int k=j+1;k<=n-1;k++){
        if(a[i]<a[j]+a[k]&&a[j]<a[i]+a[k]&&a[k]<a[i]+a[j]) ans++;
      }
    }
  }
  cout << ans << endl;
}

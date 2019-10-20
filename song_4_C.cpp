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
  int n,k;cin >> n >> k;
  vector<int> a(n);
  rep(i,n){
    int s;cin >> s;
    a[s-1]++;
  }
  int size = 0;
  rep(i,n){
    if(a[i]==0) a[i]=n+2;
    else size++;
  }
  int ans = 0;
  sort(a.begin(),a.end());
  int kae = size-k;
  int i=0;
  if(kae>0){
    while(kae){
      ans+=a[i];
      i++;
      kae--;
    }
  }
  cout << ans << endl;
}

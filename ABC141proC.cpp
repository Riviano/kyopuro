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
  int n,k,q;cin >> n >> k >> q;
  vector<int> a(n,k);
  vector<int> comand(n,0);
  for(int i=0;i<q;i++){
    int t;cin >> t;
    comand[t-1]++;
  }
  for(int i=0;i<n;i++){
    a[i]=a[i]-n+comand[i];
  }
  for(auto &i:a) cout << (i>0?"Yes":"No") << endl;

}

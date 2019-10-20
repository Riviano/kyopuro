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
  int n;cin >> n;
  vector<int> a(n);
  rep(i,n){
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  int s = a.back();
  int wa=0;
  rep(i,n-1){
    wa+=a[i];
  }
  cout << (wa>s?"Yes":"No") << endl;
}

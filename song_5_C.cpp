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
  Int n,k;cin >> n >> k;
  Int a[100000] = {0};
  for(Int i=0;i<n;i++){
    Int s,t;cin >> s >> t;
    a[s-1]+=t;
  }
  Int sum = 0;
  for(Int i=0;i<100000;i++){
    sum+=a[i];
    if(sum>=k){
      cout << i+1 << endl;
      return 0;
    }
  }
}

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
  vector<int> a(100001,0);
  int n;cin >> n;
  rep(i,n){
    int d;cin >> d;
    a[d]++;
  }
  int avg=n/2;
  int sum=0;
  int ans = 0;
  bool flag = false;
  for(int i=1;i<=100000;i++){
    sum+=a[i];
    if(sum==avg){
      ans++;
      flag = true;
      continue;
    }
    if(flag) break;
  }
  cout << ans << endl;
}

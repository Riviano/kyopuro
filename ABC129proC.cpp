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
const long long mod = 1e9+7;

int main(){
  int N,M;cin >> N >> M;
  vector<int> oks(N+1,true);
  for(int i=0;i<M;i++){
    int a;cin >> a;
    oks[a]=false;
  }
  vector<Int> dp(N+1);
  dp[0]=1;
  for(int now=0;now<N;now++){
    for(int next = now+1;next<=min(N,now+2);next++){
      if(oks[next]){
        dp[next]+=dp[now];
        dp[next]%=mod;
      }
    }
  }
  cout << dp[N] << endl;
  return 0;
}

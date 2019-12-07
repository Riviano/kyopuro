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
struct gen{
  int time;
  int basyo;
  int syozi;
};
int main(){
  while(1){
  int n;cin >> n;
  if(n==0) break;
  int dp[4][100];
  rep(i,4){
    rep(j,100)dp[i][j]=INF;
  }
  int bef=0,beft=0;
  vector<pair<int,int>> v(n);
  rep(i,n){
    int a,b;cin >> a >> b;
    v[i] = {a,b};//場所,時間
  }
  rep(i,n){
    int a,b;
    a=v[i].first;
    b=v[i].second;
    if(i==0){
      if(a>b){
        cout << "NG 1" << endl;
        break;
      }
      dp[1][i] = a;
      bef=a;
      beft=b;
      continue;
    }
    int check = 0;
    rep(j,4){
      if(j==0) continue;
      if(dp[j][i-1]==INF) continue;
      if(abs(a-bef)*(j+1)<=b-beft&&j<3){
        dp[j+1][i]=dp[j][i-1]+abs(a-bef);
      }
      if(bef*(j+1)+a<=b-beft){
					dp[1][i]=min(dp[j][i-1]+a+bef,dp[1][i]);
				}
    }
    bef=a;
    beft=b;
    rep(j,4){
      if(dp[j][i]!=INF) check=1;
    }
    if(check==0){
      cout << "NG " << i+1 << endl;
      break;
    }
  }
    int ans = INF;
    rep(i,3){
      ans = min(ans,dp[i+1][n-1]+bef);
    }
    if(ans==INF) continue;
    cout << "OK " << ans << endl;
  }
  return 0;
}

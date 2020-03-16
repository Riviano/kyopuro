#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const Int INF = (1<<20);
Int N,W;
Int w[128],v[128];
Int dp[128][512];
int main(){
    cin >> N >> W;
    rep(i,N) cin >> w[i] >> v[i];
    Int sum = 0;
    rep(i,N){
        Int ww = w[i] - w[0];
        for(int j=i;j>=0;j--){
            for(int k=sum;k>=0;k--){
                dp[j+1][k+ww] = max(dp[j+1][k+ww],dp[j][k]+v[i]);
            }
        }
        sum+=ww;
    }
    Int ans = 0;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=sum;j++){
            if(w[0]*i+j>W) continue;
            ans = max(ans,dp[i][j]);
        }
    }
    cout << ans << endl;
}
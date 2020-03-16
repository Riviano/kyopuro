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
template<class T>bool chmax(T &a, const T b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T b) { if (b<a) { a=b; return 1; } return 0; }
const long long INF = 1LL<<60;

int main(){
    ll H,N;
    cin >> H >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    for(int i=0;i<N;i++) cin >> A[i] >> B[i];
    vector<vector<ll>> dp(N+1,vector<ll>(H+1,INF));
    dp[0][0] = 0;
    for(ll i=0;i<N;i++){
        for(ll j=0;j<=H;j++){
            chmin(dp[i+1][j],dp[i][j]);
            chmin(dp[i+1][min(j+A[i],H)],dp[i+1][j]+B[i]);
        }
    }
    ll ans = INF;
    /*for(ll i=0;i<=N;i++){
        chmin(ans,dp[i][H]);
    }*/
    cout << dp[N][H] << endl;
}
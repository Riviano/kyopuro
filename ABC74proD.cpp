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
const int INF = (1LL<<30);

signed main(){
    int N;cin >> N;
    vector<vector<Int>> A(N,vector<Int>(N)),dp(N,vector<Int>(N));
    rep(i,N)rep(j,N) cin >> A[i][j],dp[i][j] = A[i][j];
    
    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j||k==i||k==j||dp[i][k]==INF||dp[k][j]==INF) continue;

                if(dp[i][k]+dp[k][j]==A[i][j]) dp[i][j] = INF;
                else if(dp[i][k]+dp[k][j]<A[i][j]){
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }
    Int ans = 0;
    rep(i,N)rep(j,N){
        if(dp[i][j]!=INF) ans+=dp[i][j];
    }
    cout << ans/2 << endl;
}


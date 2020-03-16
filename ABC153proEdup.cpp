
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
const long long INF = 1LL<<60;

int main(){
    int H,N;cin >> H >> N;
    vector<int> a(N),b(N);
    for(int i=0;i<N;i++) cin >> a[i] >> b[i];
    vector<ll> dp(H+1,INF);
    dp[0] = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<=H;j++){
            chmin(dp[min(j+a[i],H)],dp[j]+b[i]);
        }
    }
    cout << dp[H] << endl;
}
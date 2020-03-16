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
    int n;cin >> n;
    vector<int> dp(n+1,n);
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        for(int pow6=1;pow6<=i;pow6*=6){
            dp[i] = min(dp[i],dp[i-pow6]+1);
        }
        for(int pow9=1;pow9<=i;pow9*=9){
            dp[i] = min(dp[i],dp[i-pow9]+1);
        }
    }
    cout << dp[n] << endl;

}
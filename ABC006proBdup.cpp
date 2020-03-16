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
vector<Int> memo;

int main(){
    Int n;cin >> n;
    memo.resize(n);
    memo[0] = 0,memo[1] = 0,memo[2] = 1;
    for(int i=3;i<n;i++){
        memo[i] = (memo[i-1]+memo[i-2]+memo[i-3])%10007;
    }
    cout << memo[n-1]%10007 << endl;
}
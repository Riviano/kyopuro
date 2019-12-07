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

const int MAX_N = 110000;
int memo[MAX_N];
int rec(int n){
    if(n==0) return 0;
    if(memo[n] != -1) return memo[n];
    int res = n;
    for(int pow6=1;pow6<=n;pow6 *=6) res = min(res,rec(n-pow6)+1);
    for(int )
}
int main(){
    int N;cin >> N;
    for(int i=0;i<MAX_N;i++) memo[i] = -1;
    cout << rec(N) << endl;
}
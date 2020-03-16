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
Int MOD = 1000000007;
int main(){
    Int n,m,ans = 1;
    cin >> n >> m;
    if(abs(n-m)>1){
        cout << 0 << endl;
        return 0;
    }
    for(int i=1;i<=n;i++) ans = ans*i%MOD;
    for(int i=1;i<=m;i++) ans = ans*i%MOD;
    cout << (abs(n-m)==0?ans*2%MOD:ans) << endl;
    return 0;
}

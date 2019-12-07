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

int main(){
    Int n,k;cin >> n >> k;
    vector<Int> h(n);
    for(auto &i:h) cin >> i;
    sort(h.begin(),h.end());
    Int minn = INF;
    for(Int i=0;i<=n-k;i++){
        minn = min(minn,abs(h[i+k-1]-h[i]));
    }
    cout << minn << endl;
}
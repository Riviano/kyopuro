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
const int N = 15;
vector< pair< int,int > > A[N];
int main(){
    int n,ans = 0;
    cin >> n;
    rep(i,n){
        int a,x,y;
        cin >> a;
        rep(j,a){
            cin >> x >> y;
            x--,A[i].push_back({x,y});
        }
    }
    for(int i=1;i<(1<<n);i++){
        int ch = 0;
        for(int j=0;j<n;j++){
            if(!((1<<j)&i)) continue;
            for(auto &x:A[j]){
                int state = ((1<<x.first)&i)?1:0;
                ch |= state!= x.second;
            }
        }
        if(!ch) ans = max(ans,__builtin_popcount(i));
    }
    cout << ans << endl;
}
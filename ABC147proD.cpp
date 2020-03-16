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
const int MOD = 1e9+7;
const int N=3e5+5;
Int n,cnt[70],x[N],ans;

signed main(){
    cin >> n;
    for(Int i=0;i<n;i++) cin >> x[i];
    for(Int i=n-1;i>=0;i--){
        Int ji = 0;
        while(ji<=61){
           if(x[i]%2==1) cnt[ji]++;
           ji++;
           x[i]/=2; 
        }
    }
    //  
    for(Int i=0;i<=60;i++){
        Int cheng = (cnt[i])*(n-cnt[i])%MOD;
        for(Int j=1;j<=i;j++) cheng = cheng*2%MOD;
        ans = (ans+cheng)%MOD;
    }//ここ分からんぞ〜〜？！
    cout << ans << endl;
}
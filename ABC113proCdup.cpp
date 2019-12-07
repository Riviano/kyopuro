#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef pair<int,int> P;
using Int = long long;
using VI = vector<int>;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

signed main(){
    Int n,m;cin >> n >> m;
    vector<Int> p(m),y(m);
    for(Int i=0;i<m;i++) cin >> p[i] >> y[i];
    using P = pair<Int,Int>;
    vector<P> vp;
    for(Int i=0;i<m;i++) vp.emplace_back(y[i],i);
    sort(vp.begin(),vp.end());
    vector<string> ans(m);
    vector<Int> cnt(n+1,0);
    for(Int i=0;i<m;i++){
        Int x=vp[i].second;
        ans[x]=to_string(++cnt[p[x]]);
        while(ans[x].size()<6u) {ans[x] = '0'+ans[x];}
        ans[x] = to_string(p[x]) + ans[x];
        while(ans[x].size()<12u) ans[x]='0'+ans[x];
    }
    for(string s:ans) cout << s << endl;
    
}
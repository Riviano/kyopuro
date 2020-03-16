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
using int limit = 100010;
using edge = struct{int to;Int cost;};
vector<edge> tree[limit];
Int depth[limit];

void dfs(int v,int p,Int d){
    depth[v] = d;
    for(auto nv:tree[v]){
        if(nv.to==p) continue;
        dfs(nv.to,v,d+nv.cost);
    }
}
int main(){
    int n;cin >> n;
    rep(i,n-1){
        int a,b,c;cin >> a >> b >> c;
        a--,b--;
        tree[a].push_back({b,c});
        tree[b].push_back({a,c});
    }
    int q,k;cin >> q >> k;
    k--;
    dfs(k,-1,0);
}
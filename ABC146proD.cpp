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
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }

int N;
vector<P> E[101010];
int ans [101010];
void dfs(int cu,int pa=-1,int col=0){
    set<int> used;
    used.insert(col);
    int c = 1;
    for(auto to:E[cu]){
        if(to.first!=pa){
            while(used.count(c)) c++;
            ans[to.second] = c;
            dfs(to.first,cu,c);
            c++;
        }
    }
}
int main(){
    cin >> N;
    rep(i,N-1){
        int a,b;cin >> a >> b;
        a--,b--;
        E[a].push_back({b,i});
        E[b].push_back({a,i});
    }
    dfs(0);
    int ma = 0;
    rep(i,N) chmax(ma,(int)E[i].size());
    cout << ma << endl;
    rep(i,N-1) cout << ans[i] << endl;
    
}
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
vector<int> visited;
int N,M;
vector<vector<int>> G;
bool fl = false;


int main(){
    cin >> N >> M;
    G.resize(N);
    visited.resize(N);
    for(auto i:visited) i = 0;
    rep(i,M){
        int a,b;cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(auto nv:G[0]){  
        for(auto go:G[nv]){
            if(go==N-1){
                fl = true;
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
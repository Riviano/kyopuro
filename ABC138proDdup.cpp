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

int N,Q;
vector<vector<Int>> G(200010);
vector<Int> cost(200010);
vector<bool> visited(200010,false);

void bfs(int s){
    queue<int> que;
    que.push(s);
    visited[s] = true;
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto nv:G[v]){
            if(visited[nv] == false){
                que.push(nv);
                cost[nv] += cost[v];
                visited[nv] = true;
            }
        }
    }
}

int main(){
    cin >> N >> Q;
    rep(i,N-1){
        int a,b;cin >> a >> b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    rep(i,Q){
        int p,x;cin >> p >> x;
        p--;
        cost[p]+=x;
    }
    bfs(0);
    rep(i,N-1) cout << cost[i] << " ";
    cout << cost[N-1] << endl;
}
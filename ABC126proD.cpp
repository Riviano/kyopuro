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
using Edge = pair<int,int>;
using Graph = vector<vector<Edge>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }

int N;
Graph G;
vector<int> res;

void dfs(int v,int p,int c){
  res[v] = c;
  for(auto e:G[v]){
    if(e.first==p) continue;
    if(e.second&1) dfs(e.first,v,1-c);
    else dfs(e.first,v,c);
  }
}

int main(){
  cin >> N;
  G.assign(N,vector<Edge>());
  for(int i=0;i<N-1;i++){
    int u,v,w;cin >> u >> v >> w;
    --u,--v;
    G[u].push_back(Edge(v,w));
    G[v].push_back(Edge(u,w));
  }
  res.assign(N,0);
  dfs(0,-1,0);
  for(auto &v:res) cout << v << endl;
}
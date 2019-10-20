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
using Graph = vector<pair<int,int>>; // もう一つのint は距離


int main(){
  int n,m,l;cin >> n >> m >> l;
  Graph G(n);
  rep(i,m){
    int a,b,c;cin >> a >> b >> c;
    a--,b--;
    G[a].push_back(make_pair(b,c));
    G[b].push_back(make_pair(a,c));
  }
  int q;cin >> q;
  rep(i,q){
    int st = l;
    int s,t;cin >> s >> t;
    s--;t--;
    vector<int> dist(n, -1);
    queue<int> que;
    dist[s] = 0, que.push(s);
    while (!que.empty()) {
        int v = que.front(); que.pop();
        for (auto nv : G[v].first) {
            if (dist[nv] == -1&&st>G[v].second) {
                dist[nv] = dist[v] + 1;
                que.push(nv);
                st-=G[v].second;
            }
        }
    }

    // t に辿り着けるかどうか
    if (dist[t] != -1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}

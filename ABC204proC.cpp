#include<bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;
vector<bool> seen;
int c;
void dfs(const Graph &G,int v){
    c++;
    seen[v] = true;
    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        dfs(G,next_v);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    c = 0;
    Graph G(n);
    for(int i=0;i<m;i++){
        int a,b;cin >> a >> b;
        G[a-1].push_back(b-1);
    }
    seen.assign(n,false);
    int ans = 0;
    for(int i=0;i<n;i++){
        dfs(G,i);
        ans += c;
        c = 0;
        seen.assign(n,false);
    }
    cout << ans << endl;
}
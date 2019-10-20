#include<bits/stdc++.h>
using namespace std;

struct edge{
  int to, cost;
};

vector<edge> G[2000010];
bool vis[100010];
int d[100010];

bool dfs(int v,int dist){
  if(vis[v]){
    if(d[v] != dist){
        return true;
    }
    else{
        return false;
    }
  }
  vis[v] = true;
  d[v] = dist;
  for(int i=0;i<(int)G[v].size();i++){
    if(dfs(G[v][i].to,d[v]+G[v][i].cost)) return true;
  }
  return false;
}

int main(){
  int n,m;cin >> n >> m;
  for(int i=0;i<m;i++){
    int l,r,d;cin >> l >> r >> d;
    l--;r--;
    G[l].push_back({r,d});
    G[r].push_back({l,-d});
  }
  for(int i=0;i<n;i++){
    if(!vis[i]&&dfs(i,0)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}

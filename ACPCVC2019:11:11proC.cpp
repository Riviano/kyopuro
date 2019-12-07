#include<bits/stdc++.h>
#define int long long
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const int INF = 1e18;
void solve(int N,int M){
  int s,g1,g2;cin >> s >> g1 >> g2;
  s--,g1--,g2--;
  vector<vector<int>> dist(N,vector<int>(N,INF));
  for(int i=0;i<N;i++) dist[i][i] = 0;
  for(int i=0;i<M;i++){
    int a,b,c;cin >> a >> b >> c;
    a--;b--;
    dist[a][b]=c;
  }
  for(int k=0;k<N;k++)for(int i=0;i<N;i++)for(int j=0;j<N;j++){
    chmin(dist[i][j],dist[i][k]+dist[k][j]);
  }
  int ans = INF;
  for(int t=0;t<N;t++){
    chmin(ans,dist[s][t]+dist[t][g1]+dist[t][g2]);
  }
  cout << ans << endl;
}
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  while(1){
    int N,M;cin >> N >> M;
    if(N==0) break;
    solve(N,M);
  }
  return 0;
}

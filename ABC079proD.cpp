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

int h,w;
vector<vector<int>> c(10,vector<int>(10));
vector<vector<int>> G;
int main(){
    cin >> h >> w;
    for(auto &i:c)for(auto &j:i){
        cin >> j;
    }
    G.resize(h,vector<int>(w));
    for(auto &i:G)for(auto &j:i){ cin >> j;}
    for(int k=9;k>=0;k--){
        for(int i=9;i>=0;i--){
            for(int j=9;j>=0;j--){
                c[i][j] = min(c[i][j],c[i][k]+c[k][j]);
            }   
        }
    }
    int ans = 0;
    rep(i,h){
        rep(j,w){
            if(G[i][j]==-1||G[i][j]==1) continue;
            ans += c[G[i][j]][1];
        }
    }
    cout << ans << endl;

}
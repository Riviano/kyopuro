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
vector<int> G[20];
int main(){
    int n,m;cin >> n >> m;
    for(int i=0,a,b;i<m;i++){
        cin >> a >> b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    bool used[20];
    int ans = 0;
    for(int i=0;i<n;i++){
        memset(used,0,sizeof(used));
        ans = 0;
        queue<P> que;
        que.push(P(i,0));
        while(!que.empty()){
            int v = que.front().first,d=que.front().second;que.pop();
            if(used[v]) continue;
            used[v] = 1;
            if(d==2) ans++;
            else{
                for(int gi=0;gi<G[v].size();gi++) que.push(P(G[v][gi],d+1));
            }
        }
        cout << ans << endl;
    }
}
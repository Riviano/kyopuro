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
vector<vector<int>> Graph;
vector<int> kyuryo;
int n;
void bfs(int numberid){
    int maxx = 0;
    int minn = INF;
    if(Graph[numberid].size()==1) {kyuryo[numberid] = kyuryo[Graph[numberid][0]]*2+1;if(numberid>0) bfs(numberid-1);}
    else if(Graph[numberid].size()==0&&numberid>0) bfs(numberid-1);
    else{
            for(auto &i:Graph[numberid]){
                maxx=max(kyuryo[i],maxx);
                minn=min(kyuryo[i],minn);
            }
            kyuryo[numberid] = maxx+minn+1;
            if(numberid>0) bfs(numberid-1);
        }
}
int main(){
    cin >> n;
    Graph.resize(n);
    kyuryo.resize(n);
    for(auto &i:kyuryo) i = 1;
    rep(i,n-1){
        int data;cin >> data;data--;
        Graph[data].push_back(i+1);
    }
    /*rep(i,n){
        debug(i);
        for(auto &j:Graph[i]) cout << j << " ";
        cout << endl;
    }*/
    bfs(n-1);
    cout << kyuryo[0] << endl;
}
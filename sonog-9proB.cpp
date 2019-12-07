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
const int MAX = 210;
int N,M,R;
Int dist[MAX][MAX];

int main(){
    cin >> N >> M >> R;
    vector<int> vr;
    rep(i,R){
        int r;cin >> r;r--;
        vr.push_back(r);
    }
    for(int i=0;i<MAX;i++){
        for(int j=0;j<210;j++) dist[i][j] = INF;
        dist[i][i] = 0;
    }
    
    for(int i=0;i<M;i++){
        int a,b,c;cin >> a >> b >> c;
        --a,--b;
        dist[a][b] = c;
        dist[b][a] = c;
    }
    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }

    Int res = INF;
    sort(vr.begin(),vr.end());
    do{
        Int tmp = 0;
        for(int i=0;i<vr.size()-1;i++) tmp += dist[vr[i]][vr[i+1]];
        res = min(res,tmp);
    }while(next_permutation(vr.begin(),vr.end()));
    cout << res << endl;
}
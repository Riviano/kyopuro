#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 9999999
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int N,M;
vector<vector<P>> G; 
int main(){
    cin >> N >> M;
    vector<vector<int>> d(N,vector<int>(N));
    for(int i=0;i<N;i++){
        d[i][i] = 0;
    }
    rep(i,M){
        int a,b,c;cin >> a >> b >> c;
        a--,b--;
        d[a][b] = c;
        d[b][a] = c;
    }
    vector<vector<int>> ki(N,vector<int>(N));
    ki = d;

    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j) continue;
                chmin(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    int res = 0;
    int sum = 0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(i==j) continue;
            sum++;
            if(d[i][j]==ki[i][j]){
                res++;
                //cout << "i:" << i << "j:" << j << endl;
            }
        }
    }
    cout << (sum-res) << endl;
}
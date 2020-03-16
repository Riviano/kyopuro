#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const Int INF = (1<<20);

int main(){
    int N,W;cin >> N >> W;
    vector<int> a(W,0);
    for(int i=0;i<N;i++){
        int w,v;cin >> w >> v;
        w--;
        a[w] = max(a[w],v);
    }
    for(int i=0;i<n;i++){
            for()
            a[i] = max()
        }
    }
}
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

signed main(){
    /*Int N,K;cin >> N >> K;
    vector<Int> H(N);
    for(auto &i:H) cin >> i;
    sort(H.begin(),H.end());
    reverse(H.begin(),H.end());
    for(Int i=0;i<K;i++){
        H[i] = 0;
    }
    Int ans = 0;
    for(auto &i:H) ans+=i;
    cout << ans << endl;*/
    Int N,K;cin >> N >> K;
    priority_queue<Int> que;
    for(Int i=0;i<N;i++){
        Int a;cin >> a;
        que.push(a);
    }
    Int sum = 0;
    for(Int i=0;i<N;i++){
        if(K>0){
            que.pop();
            K--;
        }else{
            sum+=que.top();
            que.pop();
        }
    }
    cout << sum << endl;
}


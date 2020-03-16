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

int main(){
    int n,t;cin >> n >> t;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> mina(n);
    mina[0] = a[0];
    REP(i,1,n) mina[i] = min(mina[i-1],a[i]);
    auto profit = [&](int i){return a[i]-mina[i];};
    int max_pro = -1;
    int cnt = 0;
    rep(i,n){
        if(max_pro<profit(i)){
            max_pro = profit(i);
            cnt = 1;
        }else if(max_pro==profit(i)){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
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

    int main() {
    int N;
    cin >> N;
    
    ll place[N + 1];
    // place[i]...値iのaにおけるindex
    
    for (int i = 1; i <= N; ++i) {
        ll a;
        cin >> a;
        place[a] = i;
        // 保持するのはindexなので、ここが普通と逆なことに注意
    }

    Int ans = 0;
    set<ll> used = {0, N + 1};
    // すでに見た要素のindexを保持する
    for (int i = 1; i <= N; ++i) {
        Int r, l;
        
        auto itr = used.lower_bound(place[i]);
        r = *itr;
        // lower_boundで右端を調べる(upper_boundでもいい)
        l = *(--itr);
        // その1個手前が左端
        
       
        debug(i);
        debug(place[i]);
        debug(l);
        debug(r);
        debug((place[i] - l));
        debug((r - place[i]));
        debug(i*(place[i] - l) * (r - place[i]));
        used.insert(place[i]);
    }

    cout << ans << endl;
    return 0;
}


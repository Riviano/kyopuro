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
const Int INF = 9999999999;

int main(){
    Int n,m;cin >> n >> m;
    vector<pair<Int,Int>> vec(n+1);
    for(Int i=0;i<m;i++){
        int p;
        string s;
        cin >> p >> s;
        p--;
        if(vec[p].first==1) continue;
        if(s=="AC") vec[p].first = 1;
        else vec[p].second++;
    }
    Int ans1 = 0;
    Int ans2 = 0;
    rep(i,n){
        if(vec[i].first==1){
            ans1++;
            ans2+=vec[i].second;
        }
        //cout << i << ":" << vec[i].first << " " << vec[i].second << endl;
    }
    //cout << "ans";
    cout << ans1 << " " << ans2 << endl;
}
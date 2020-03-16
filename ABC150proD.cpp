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
int gcd(Int a, Int b) {
 return b != 0 ? gcd(b, a % b) : a;
}//gcd

int lcm(Int a, Int b) {
 return a / gcd(a, b)*b;
}//lcm
int main(){
    int n,m;cin >> n >> m;
    vector<int> A(n);
    auto ni = [](int v){
        int res = 0;
        while(v%2==0){
            v/=2;
            res++;
        }
        return res;
    };
    rep(i,n){
        cin >> A[i];
        if(A[i]&1){cout << 0 << endl;return 0;}
        A[i]/=2;
    }
    int t = ni(A[0]);
    rep(i,n){
        if(t!=ni(A[i])) {cout << 0 << endl;return 0;}
        A[i]>>=t;
    }
    m>>=t;
    Int l = 1;
    rep(i,n){
        l = lcm(l,A[i]);
        if(l>m){
            cout << 0 << endl;
            return 0;
        }
    }
    m/=l;
    Int ans = (m+1)/2;
    cout << ans << endl;
    
}
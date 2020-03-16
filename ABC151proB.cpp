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
    int n,k,m;cin >> n >> k >> m;
    vector<int> a(n);
    int sum=0;
    rep(i,n-1){
        cin >> a[i];
        sum+=a[i];
    }
    int x=m*n-sum;
    if(x>k){
        cout << -1 << endl;
        return 0;
    }
    if(x<0){
        cout << 0 << endl;
        return 0;
    }
    cout << x << endl;
}
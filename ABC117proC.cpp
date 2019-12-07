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
    int n,m;cin >> n >> m;
    vector<Int> x(m,0);
    for(auto &i:x) cin >> i;
    sort(x.begin(),x.end());
    vector<Int> a(m-1,0);
    rep(i,m-1){
        a[i] = abs(x[i]-x[i+1]);
    }
    
    sort(a.begin(),a.end());
    
    for(Int i=0;i<n-1;i++) if(a.size()>0){a.pop_back();}
    Int ans = 0;
    for(auto &i:a) ans+=i;
    cout << ans << endl;
}
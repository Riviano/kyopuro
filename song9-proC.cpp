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

signed main(){
    string s,t;cin >> s >> t;
    string ans;
    int n=s.size(),m=t.size();
    for(int i =0;i<=n-m;i++){
        bool f = 0;
        string a = s;
        for(int j=0;j<m;j++){
            if(a[i+j]=='?') continue;
            if(a[i+j]!=t[j]) f= 1;
        }
        if(f) continue;
        for(int j=0;j<m;j++) a[i+j] = t[j];
        for(int j=0;j<n;j++) if(a[j]=='?') a[j] = 'a';
        if(ans.empty()) ans = a;
        else ans = min(ans,a);
    }
    if(ans.empty()) cout << "UNRESTORABLE" << endl;
    else cout << ans << endl;
    return 0;
}
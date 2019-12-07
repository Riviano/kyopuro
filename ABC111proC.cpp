#include <bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(), (v).end()
#define REP(i, p, n) for (int i = p; i < (int)(n); ++i)
#define rep(i, n) REP(i, 0, n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int, int> P;
using ll = long long;
using VI = vector<int>;

void solve(){
    Int n;
    Int ans = 0;
    cin >> n;
    vector<Int> v1(100001,0),v2(100001,0);
    Int tmp;
    rep(i,n){
        cin >> tmp;
        if(i&1) v2[tmp]++;
        else v1[tmp]++;
    }
    priority_queue<P> max1,max2;
    max1.push(make_pair(0,0));
    max2.push(make_pair(0,0));
    rep(i,100001){
        if(v1[i]!=0){
            max1.push(make_pair(v1[i],i));
        }
        if(v2[i]!=0){
            max2.push(make_pair(v2[i],i));
        }
    }
    Int ans1,ans2;
    Int m11,m12,m21,m22;
    if(max1.top().second!=max2.top().second){
        ans = (n/2-max1.top().first)+(n/2-max2.top().first);
    }else{
        m11 = max1.top().first;
        max1.pop();
        m12 = max1.top().first;
        m21 = max2.top().first;
        max2.pop();
        m22 = max2.top().first;
        ans1 = (n/2-m11)+(n/2-m22);
        ans2 = (n/2-m12)+(n/2-m21);
        ans = min(ans1,ans2);
    }
    cout << ans << endl;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
}

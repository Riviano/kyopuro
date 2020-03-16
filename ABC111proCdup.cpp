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
    Int n;cin >> n;
    vector<Int> k(100001,0),g(100001,0);
    rep(i,n){
        int data;cin >> data;
        if(i&1) k[data]++;
        else g[data]++;
    }
    priority_queue<P> quek,queg;
    quek.push(P(0,0));
    queg.push(P(0,0));
    rep(i,100001){
        if(k[i]!=0){
            quek.push(P(k[i],i));
        }
        if(g[i]!=0){
            quek.push(P(g[i],i));
        }
    }
    Int ans = 0;
    Int m11,m12,m21,m22;
    Int ans1,ans2;
    if(quek.top().second!=queg.top().second){
        ans = (n/2-quek.top().first)+(n/2-queg.top().first);
    }else{
        m11 = quek.top().first;
        quek.pop();
        m12 = quek.top().first;
        m21 = queg.top().first;
        quek.pop();
        m22 = queg.top().first;
        ans1 = (n/2-m11)+(n/2-m22);
        ans2 = (n/2-m21)+(n/2-m12);
        ans = min(ans1,ans2);
    }
    cout << ans << endl;
}
        
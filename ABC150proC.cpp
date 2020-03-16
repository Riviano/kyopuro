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
int n;
bool di(vector<int> a,vector<int> b){
     for(int s=0;s<n;s++){
            if(a[s]!=b[s]) return false;
        }
        return true;
}
int main(){
    cin >> n;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    vector<int> p(n),q(n);
    for(auto &i:p) cin >> i;
    for(auto &i:q) cin >> i;
    bool pf = true;
    bool qf = true;
    int ap,aq;
    int t = 0;
    do {
        t++;
        if(pf){
            if(di(p,v)){pf = false;ap = t;}
        }
        if(qf){
            if(di(q,v)){qf= false;aq = t;}
        }
    } while( next_permutation(v.begin(),v.end()));     // 次の順列を生成
    cout << abs(ap-aq) << endl;
    return 0;
}
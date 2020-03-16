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
const long long INF = 1LL<<60;


int main(){
    int n,k;cin >> n >> k;
    vector<vector<int>> graph(n,vector<int>(n,0));
    vector<Int> a(n);
    for(auto &i:a) cin >> i;
    sort(a.begin(),a.end());
    int kizyun = 0;
    while(k){
        Int minn = INF;
        pair<int,int> pa;
        if(a[kizyun]<0){
            pair<int,int> a = make_pair(kizyun,gp);
            pair<int,int> a = make_pair(kizyun,gp);
        }
        
    }
}
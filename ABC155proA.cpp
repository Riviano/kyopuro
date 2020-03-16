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
    vector<int> a(3);
    for(auto &i:a) cin >> i;
    sort(a.begin(),a.end());
    if(a[0]==a[1]&&a[1]==a[2]){
        cout << "No" << endl;
        return 0;
    }
    if(a[0]==a[1]&&a[0]!=a[2]){
        cout << "Yes" << endl;
        return 0;
    }
    if(a[1]==a[2]&&a[0]!=a[2]){
        cout << "Yes" << endl;
        return 0;
    }
    if(a[0]==a[1]&&a[2]!=a[0]){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    }
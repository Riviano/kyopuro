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
    map<int,int> vec;
    int n;cin >> n;
    rep(i,n){
        int data;cin >> data;
        if(vec[data]==0) vec[data] = 1;
        else vec[data] = 0;
    }
    int ans = 0;
    for(auto &i:vec){
        if(i.second!=0) ans++;
    }
    cout << ans << endl;
}
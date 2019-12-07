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
    int n,k;cin >> n >> k;
    vector<Int> num(k,0);
    for(int i=1;i<=n;i++) num[i%k]++;
    Int res = 0;
    for(int a=0;a<k;a++){
        int b = (k-a)%k;
        int c = (k-a)%k;
        if((b+c)%k!=0) continue;
        res += num[a] * num[b] * num[c];
    }
    cout << res << endl;
}
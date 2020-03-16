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
    int n;cin >> n;
    int ans = 0;
    while(n){
        if(n<6){
            ans+=n;
            n=0;
        }else{
            double roku = log(n)/log(6);
            double kyu = log(n)/log(9);
            int rokusage = roku;
            int kyusage = kyu;
            int pkyu = pow(9,kyusage);
            int proku = pow(6,rokusage);
            if(pkyu>=proku){
                n-=pkyu;
                ans++;
            }else{
                n-=proku;
                ans++;
            }
        }
        debug(n);
    }
    cout << ans << endl;
}
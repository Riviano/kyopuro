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

int n;
VI l;
VI A;//A,B,C

int main(){
    cin >> n;
    A.resize(n);
    rep(i,3) cin >> A[i];
    l.resize(n);
    rep(i,n) cin >> l[i];
    int res = 1<<29;
    VI bit(3);
    for(bit[0] = 1;bit[0] <(1<<n);bit[0]++){
        for(bit[1]=1;bit[1]<(1<<n);bit[1]++){
            if(bit[1]&bit[0]) continue;
            for(bit[2]=1;bit[2]<(1<<n);bit[2]++){
                if(bit[2]&bit[0]) continue;
                if(bit[2]&bit[1]) continue;

                vector<int> sums(3,0),nums(3,0);
                for(int i=0;i<n;i++){
                    for(int j=0;j<3;j++){
                        if(bit[j]&(1<<i)){
                            sums[j]+=l[i];
                            nums[j]++;
                        }
                    }
                }
                int score = 0;
                for(int i=0;i<3;i++){
                    score+=abs(sums[i]-A[i]);
                    score+=(nums[i]-1) * 10;
                }
                res = min(res,score);
            }
        }
    }
    cout << res << endl;
}
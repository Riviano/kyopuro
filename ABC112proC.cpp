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
int main(){
    int n;cin >> n;
    vector<int> x(n),y(n),h(n);
    rep(i,n){
        cin >> x[i] >> y[i] >> h[i];
    }
    for(int cx=0;cx<=100;cx++){
        for(int cy=0;cy<=100;cy++){
            int H=-1;
            int hmax = 2e9;
            bool success = true;
            for(int i=0;i<n;i++){
                int d = abs(cx-x[i])+abs(cy-y[i]);
                if(h[i]>0){
                    int h2 = h[i]+d;
                    if(H>0&&H!=h2){
                        success = false;
                        break;
                    }else{
                        H =h2;
                    }
                }else{
                        hmax = min(hmax,d);
                    }
            }
            if(success && H<=hmax){
                cout << cx << " " << cy << " " << H << endl;
            }
        }
    }
        
}
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
    vector<int> x(n),y(n),h(n);
    rep(i,n){
        cin >> x[i] >> y[i] >> h[i];
    }

    for(int cx=0;cx<=100;cx++){
        for(int cy=0;cy<=100;cy++){
            int nh = -1;
            for(int i=0;i<n;i++){
                if(h[i]>0){
                    int tmp = abs(cy-y[i])+h[i]+abs(cx-x[i]);
                    if(nh==-1){
                        nh = tmp;
                    }else{
                        if(nh!=tmp){
                            nh = -2;
                            break;
                        }
                    }
                }
            }
            if(nh==-2) continue;
            for(int i=0;i<n;i++){
                if(h[i]==0){
                    int dist = abs(cy-y[i])+abs(cx-x[i]);
                    if(nh>dist){
                        nh = -2;
                        break;
                    }
                }
            }
            if(nh==-2) continue;
            cout << cx << " " << cy << " " << nh << endl;
            return 0;
            
        }
    }

}
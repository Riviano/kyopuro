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
double hiritu = 1.08;
int main(){
    int n;cin >> n;
    for(int x=27;x<=25*n;x+=27){

    }
    double x = 1;
    while(1){
        if(floor(x*1.08)==n){
            cout << int(x) << endl;
            return 0; 
        }
        if(x*1.05>n){
            break;
        }
        x++;
    }
    cout << ":(" << endl;
}
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
const long long S = 2*1000000000000;


int main(){
    Int A,K;cin >> A >> K;
    if(K==0){
        cout << S-A << endl;
        return 0;
    }
    Int t=0;
    Int sum = A;
    while(sum<S){
        t++;
        sum += sum*K+1;
    }
   
    cout << t << endl;
}
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

signed main(){
    unsigned long long n,a,b;cin >> n >> a >> b;
    if(a>=b) swap(a,b);
   
    if((b-a)&1){
       cout << min(a-1,n-b)+1+((b-a)-1)/2 << endl;
    }else{
        cout << ((b-a)>>1) << endl;;
    }
}
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

Int n;

void func(Int cur,int use,Int &counter){
    if(cur>n) return;
    if(use == 0b111) ++counter;
    func(cur*10+7,use|0b100,counter);
    func(cur*10+5,use|0b010,counter);
    func(cur*10+3,use|0b001,counter);
}
int main(){
    cin >> n;
    Int res = 0;
    func(0,0,res);
    cout << res << endl;
}

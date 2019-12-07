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
bool flag = false;
int solve(int count,int sum,int moku){
    if(count<=0){
        if(sum==moku){
            flag = true;
        }
        return 0;
    }
    if(count>0){
     solve(count-1,sum+5,moku);
     solve(count-1,sum+4,moku);
     solve(count-1,sum+3,moku);
     solve(count-1,sum+2,moku);
     solve(count-1,sum+1,moku);
    }

 }
int main(){
    int x;cin >> x;
    int count = x/100;
    x=x%100;
    int sum = 0;
    solve(count,0,x);
    if(flag) cout << "1" << endl;
    else cout << "0" << endl;
}

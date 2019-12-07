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
 for(int i=1;i<=9;i++){
   for(int j=1;j<=9;j++){
     if(n==i*j){cout << "Yes" << endl;return 0;}
   }
 }
 cout << "No" << endl;
}

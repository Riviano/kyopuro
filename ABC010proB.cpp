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
//2 5 8 11 3n-1==a,3n = a+1
//2 4 6 8           2n
int main(){
  int n;cin >> n;
  int ans = 0;
  rep(i,n){
    int a;cin >> a;
    while(1){
      if((a+1)%3==0)  a--,ans++;
      else if(a%2==0) a--,ans++;
      else break;
    }
  }
  cout << ans << endl;
}

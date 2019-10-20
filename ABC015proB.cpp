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
  double ans=0;
  int count=0;
  rep(i,n){
    double a;cin >> a;
    if(a==0){count++;continue;}
    ans+=a;
  }
  n-=count;
  int an = (ans+n-1)/n;
  cout << an << endl;
  return 0;
}

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
  Int left=0,right=1,mid=0;
  Int n;cin >> n;
  static int a[10000000];
  a[1]=0;a[2]=0;a[3]=1;
  for(int i=4;i<=n;i++){
    a[i]=a[i-1]+a[i-2]+a[i-3];
    a[i]%=10007;
  }
  cout << a[n] << endl;
}

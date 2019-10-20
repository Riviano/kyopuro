#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int n,l;cin >> n >> l;
  int r = n+l-1;
  int a;
  if(r<=0) a=r;
  else if(l>=0) a=l;
  else a = 0;
  cout << (n*(r+l))/2 - a << endl;
}

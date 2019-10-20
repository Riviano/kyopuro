#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int n;cin >> n;
  vector<int> d(n);
  int a=0,b=0;
  for(auto &i:d) cin >> i;
  sort(d.begin(),d.end());
  while(d.size()>1){
    a+=d.back();
    d.pop_back();
    b+=d.back();
    d.pop_back();
  }
  a+=d.back();
  //cout << a << endl << b << endl;
  cout << a-b << endl;
}

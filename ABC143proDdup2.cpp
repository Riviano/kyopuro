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
  vector<Int> l(n);
  for(auto &i:l) cin >> i;
  sort(l.begin(),l.end());//ソートしないとしゃくとりできない。

  Int res = 0;
  //aを固定して(b,c)を尺取り
  for(int i=0;i<n;i++){
    int k=i;
    for(int j=i+1;j<n;j++){
      while(k<n&&l[k]<l[i]+l[j]) ++k;
      res+=k-(j+1);
    }
  }
  cout << res << endl;
  return 0;
}

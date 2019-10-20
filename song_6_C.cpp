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
  vector<int> h(n);
  rep(i,n) cin >> h[i];
  //高さが全部0になるまでやる
  int res = 0;
  while(1){
    //最高たかさが0だったらおしまい　
    if(*max_element(h.begin(),h.end())==0) break;
    //区間分割する
    int i=0;
    while(i<n){
      if(h[i]==0) ++i;
      else{
        ++res;
        while(i<n&&h[i]>0){
          --h[i];
          ++i;
        }
      }
    }
  }
  cout << res << endl;
}

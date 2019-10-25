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
  int n,m;cin >> n >> m;
  vector<pair<Int,Int>> data(n);
  rep(i,n){
    Int a,b;cin >> a >> b;
    data[i] = make_pair(a,b);
  }
  sort(data.begin(),data.end());
  Int ans = 0;
  rep(i,n){
    m-=data[i].second;
    ans+=data[i].first*data[i].second;
    if(m<=0){
      ans-=abs(m)*data[i].first;
      break;
    }
  }
  cout << ans << endl;
}

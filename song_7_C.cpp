

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
  vector<int> a(3);
  for(auto &i:a) cin >> i;
  sort(a.begin(),a.end());
  auto check = [&](){
    bool flag = false;
    if(a[0]==a[1]&&a[1]==a[2]) flag = true;
    return flag;
  };
  int k = a[0];
  rep(i,3) a[i]-=k;
  int i=0;
  int ans = 0;
  while(1){
    if(!(i&1)&&check()) break;
    i++;
    a[0]++;
    sort(a.begin(),a.end());
    if(i%2==0) ans++;
  }

  cout << ans << endl;
}

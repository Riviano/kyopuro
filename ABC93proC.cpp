#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
typedef long long int Int;
#define INF 999999999
using ll = long long;
using VI = vector<int>;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  ll ans = 0;
  while(!(a==b&&b==c)||ans%2==1){
    ans+=1;
    if(a<=b&&a<=c) a+=1;
    else if(b<=a&&b<=c) b+=1;
    else c+=1;
  }
  ans/=2;
  cout << ans << endl;
  return 0;
}

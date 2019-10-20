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
  Int s;cin >> s;
  Int a[1000000] = {0};
  Int x = s;
  Int i = 1;
  a[x-1] = i;
  Int ans=0;
  bool flag = false;
  while(1){
    if(flag) break;
    i++;
    if(x%2==0){
      x/=2;
      if(a[x-1]==0) a[x-1] = i;
      else{
        ans = i;
        flag = true;
      }
    }
    else if(x%2==1){
      x=3*x+1;
      if(a[x-1]==0) a[x-1] = i;
      else{
        ans = i;
        flag = true;
      }
    }
    if(flag) break;
  }
  cout << ans << endl;
}

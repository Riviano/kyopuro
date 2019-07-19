#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#include<bits/stdc++.h>
using namespace std;
int calc(int d,int r){
  return d*(100+r)/100;
}

int main(){
  int x,y,s;
  while(cin >> x >> y >> s && x){
    int ans = 0;
    REP(i,1,s){
      REP(j,1,s){
        if(calc(i,x)+calc(j,x)==s){
          int yi=calc(i,y);
          int yj=calc(j,y);
          ans = max(yi+yj,ans);
        }
      }
    }
    cout << ans << endl;
  }

}

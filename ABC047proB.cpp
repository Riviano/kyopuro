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
  int w,h,n;cin >> w >> h >> n;
  int a[h][w]={0};
  /*auto print = [&](){
    rep(i,h){
      rep(j,w){
        cout << a[i][j];
      }
      cout << endl;
    }
  };*/
  for(int k=0;k<n;k++){
    int x,y,comand;
    cin >> x >> y >> comand;
    int bx,ex,by,ey;
    if(comand==1){
      bx = 0;
      by = 0;
      ex = x;
      ey = h;
    }
    else if(comand==2){
      bx= x;
      ex = w;
      by = 0;
      ey = h;
    }
    else if(comand==3){
      bx = 0;
      ex = w;
      by = 0;
      ey = y;
    }
    else{
      bx = 0;
      ex = w;
      by = y;
      ey = h;
    }
    REP(s,by,ey){
      REP(t,bx,ex){
        a[s][t] = 1;
      }
    }
  }
  int ans = 0;
  rep(i,h)rep(j,w){
    if(a[i][j]!=1)ans++;
  }
  cout << ans << endl;
}

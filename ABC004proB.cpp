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
  char a[4][4];
  rep(i,4){
    rep(j,4){
      cin >> a[i][j];//a[縦][横]
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cout << a[3-i][3-j] << " ";
    }
    cout << endl;
  }
}

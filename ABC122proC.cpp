/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
         fozubaoyou    pass System Test!
*/

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
  int n,q;cin >> n >> q;
  string s;cin >> s;
  string key = "AC";
  vector<int> data(s.size(),0);
  REP(i,0,s.size()-1){
    if(s[i]=='A'&&s[i+1]=='C'){
      data[i+1] = data[i]+1;
    }
    else data[i+1] = data[i];
  }
  /*for(auto &i:data) cout << i << " ";
  cout << endl;*/
  rep(i,q){
    int l,r;cin >> l >> r;
    int ans = 0;
    l--,r--;
    cout << data[r]-data[l] << endl;
  }

}

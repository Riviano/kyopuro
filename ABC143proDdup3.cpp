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

const int MAX = 2100;
int main(){
  Int res = 0;
  int n;cin >> n;
  vector<Int> l(n);
  rep(i,n) cin >> l[i];

  //c,s
  vector<Int> c(MAX,0),s(MAX+1,0);
  for(int i=0;i<n;i++) c[l[i]]++;
  for(int x=0;x<MAX;x++) s[x+1] = s[x] + c[x];//累積和

  //aとbを固定
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j) continue;//同じものは選ばない

      //cの満たすべき値の区間を[left,right]で表す
      int left = abs(l[i]-l[j]) + 1;
      int right = l[i] + l[j];
      //累積和で個数を求める
      int count = s[right] - s[left];
      if(left<=l[i]&&l[i]<right) --count;
      if(left<=l[j] && l[j]<right) --count;
      res+=max(count,0);
    }
  }
  cout << res/6 << endl;
}

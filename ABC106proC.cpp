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
  string s;
  Int k;
  Int zyou = 5000000000000000;
  cin >> s >> k;
  for(Int i=0;i<s.size();i++){
    if(s[i]==1) {
      k--;
      if(k<=0) {cout << s[i] << endl;return 0;}
      continue;
    }
    else{
      if(pow(s[i]-'0',zyou)>=k){
        cout << s[i] << endl;
        return 0;
      }else{
        k-=pow(s[i]-'0',zyou);
      }
    }
    if(k<=0){
      cout << s[i] << endl;
      return 0;
    }
  }
}

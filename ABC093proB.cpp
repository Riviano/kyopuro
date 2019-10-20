#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int a,b;cin >> a >> b;
  int k;cin >> k;
  int j=0;
  set<int> st;
  for(int i=0;i<k;i++){
    //cout << a+i << endl;
      if(a+i>=a&&a+i<=b) st.insert(a+i);
  }
  for(int i=k-1;i>=0;i--){
    //cout << b-i << endl;
    if(b-i>=a&&b-i<=b)st.insert(b-i);
  }
  for(auto&i:st) cout << i << endl;
}

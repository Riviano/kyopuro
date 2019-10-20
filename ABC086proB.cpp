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
bool isSquare(Int a){
  bool flag = false;
  double z = double(sqrt(a));
  if(ceil(z)==floor(z)) flag = true;
  return flag;
}

int main(){
  string a,b;cin >> a >> b;
  string ans = a+b;
  int n = stoi(ans);
  if(isSquare(n)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
typedef long long int Int;
#define INF 999999999
using ll = long long;
using VI = vector<int>;
int gcd(Int a, Int b) {
 return b != 0 ? gcd(b, a % b) : a;
}
int lcm(Int a, Int b) {
 return a / gcd(a, b)*b;
}
int main(){
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++){
    if(s[i]==','){
      cout << " ";
    }
  else cout << s[i];
  }
  cout << endl;
}

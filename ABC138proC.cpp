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
int gcd(Int a, Int b) {
  return b != 0 ? gcd(b, a % b) : a;
}
int lcm(Int a, Int b) {
  return a / gcd(a, b)*b;
}
int main(){
  int n;
  cin >> n;
  vector<double> a;
  rep(i,n){
    double x;cin >> x;
    a.push_back(x);
  }
  while(a.size()>=2){
    sort(a.begin(), a.end(), std::greater<int>() );
    double x=a.back();
    a.pop_back();
    double y=a.back();
    a.pop_back();
    x = (x+y)/2;
    a.push_back(x);
  }
  for(int i=0;i<a.size();i++) cout << a.at(i) << endl;
}

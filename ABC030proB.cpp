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
  double n,m;
  cin >> n >> m;
  while(n>12){
  n -=12;
}
  while(m>60){
    m-=60;
  }
  n*=30;
  n+= (m/2.0000);
  //cout << n << endl;
  m*=6;
  double x;
  if(m>=n) x = m-n;
  else x = n-m;
  //cout << x << endl;
  if(x>180) x=360-x;
  cout << x << endl;
}

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
  double a;
  double b;
  double x;
  cin >> a >> b >> x;
  double right = b-x/(a*a);
  right/=a;
  right = atan(right)*100;
  right = 90-right;
  cout << setprecision(10) << right << endl;
}

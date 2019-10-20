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
#define PI 3.14159265358979323846
int main(){
  int n;cin >> n;
  vector<int> a(n);
  for(auto &i:a) cin >> i;
  sort(a.begin(),a.end());
  double ans = 0;
  int i =0;
  while(!a.empty()){
    if(i&1)ans-=(a.back()*a.back());
    else ans+=(a.back()*a.back());
    a.pop_back();
    i++;
  }
  std::cout << std::fixed;
  cout << std::setprecision(6);
  cout << ans*PI << endl;
}

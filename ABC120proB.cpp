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

int main(){
  int a,b,k;cin >> a >> b >> k;
  int n = min(a,b);
  int count = 0;
  int i;
  int ans = 0;
  vector<int> s;
  for(i=1;i<=n;i++){
    if(a%i==0&&b%i==0){
      count++;
      s.push_back(i);
    }
  }
  sort(s.begin(),s.end());
  reverse(s.begin(),s.end());
  cout << s[k-1] << endl;
  return 0;
}

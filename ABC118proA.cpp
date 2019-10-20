#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define INF 999999999
using LL = long long;
using VI = vector<int>;
int main(){
  int a,b;
  cin >> a >> b;
  cout << (b%a==0?a+b:b-a) << endl;
}

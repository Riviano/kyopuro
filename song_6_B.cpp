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
  int n;cin >> n;
  map<int,int> mp;
  int i=0;
  while(mp[n]<1){
    mp[n]++;
    i++;
    if(n%2==1) n = 3*n+1;
    else n/=2;
  }
  cout << i+1 << endl;
}

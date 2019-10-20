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
  Int s;
  cin >> s;
  map<Int,Int> mp;
  Int i=1;
  while(!mp.count(s)){
    mp[s]=i++;
    if(s&1) s=s*3+1;
    else s/=2;
  }
  cout << i << endl;
}

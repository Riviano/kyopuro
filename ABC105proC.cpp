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

using namespace std;
int main(){
  int n;cin >> n;
  string str = "";
  while(n!=0){
    int r = n%2;
    if(r<0) r+=2;
    n = (n-r)/(-2);
    str+=(char)('0'+r);
  }
  reverse(str.begin(),str.end());
  if(str=="") str="0";
  cout << str << endl;
}


/*3
2 5 //b
a b c
2>=max(a,b)
5>=max(b,c)

2
3//b
a b
3>=max(a,b)
6
0,153,10,10,23
a,b,c,d,e,f
0>=max(a,b)
153>=max(b,c)
10>=max(c,d)
10>=max(d,e)
23>=max(e,f)
a=0,
b=0,
c=10,
d=10
e=10
f=23*/

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
  vector<int> b(n-1);
  int ans = 0;
  for(auto &i:b) cin >> i;
  ans+=b[0]+b[n-2];
  rep(i,n-2){
    ans+=min(b[i],b[i+1]);
  }
  cout << ans << endl;
}

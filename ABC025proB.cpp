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
  int n,a,b;cin >> n >> a >> b;
  int basyo = 0;
  rep(i,n){
    string s;
    int d;
    cin >> s >> d;
    if(s=="East"){
      if(a<=d&&d<=b) basyo+=d;
      else if(d<a) basyo+=a;
      else basyo+=b;
    }
    else{
      if(a<=d&&d<=b) basyo-=d;
      else if(d<a) basyo-=a;
      else basyo-=b;
    }
  }
  if(basyo==0){cout << 0 << endl;return 0;}
  else if(basyo<0) {cout << "West" << " " << abs(basyo) << endl;return 0;}
  else {cout << "East" << " " << basyo << endl;}
}

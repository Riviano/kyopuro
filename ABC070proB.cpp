#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int data[101]={0};
  int a,b,c,d;cin >> a >> b >> c >> d;
  int ans = 0;
  for(int i=a;i<=b;i++){
    data[i]++;
  }
  for(int i=c;i<=d;i++){
    data[i]++;
  }
  for(int i=0;i<101;i++){
    if(data[i]==2) ans++;
  }
  cout << (ans==0?0:ans-1) << endl;
}

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
  int n;
  cin >> n;
  int pl[3] = {5,2,1};
  int mi[3] = {-5,-2,-1};
  rep(i,n){
    int x,y;cin >> x >> y;
    int count = 0;
    x = abs(y-x);
        count = x/5;
        x = x%5;
        count+=x/2;
        x=x%2;
        count+=x;

    cout << count << endl;
  }
}

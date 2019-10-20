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
  int n,m;cin >> n >> m;
  priority_queue<int> que;
  for(int i=0;i<n;i++){
    int x;cin >> x;
    que.emplace(x);
  }
  while(m--){
    auto p = que.top();
    que.pop();
    que.emplace(p/2);
  }
  Int ret = 0;
  while(que.size()){
    auto p = que.top();
    que.pop();
    ret += p;
  }
  cout << ret << endl;
}

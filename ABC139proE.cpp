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
  vector<vector<int>> a(n,vector<int>(n-1));
  rep(i,n){
    rep(j,n-1){
      cin >> a[i][j];
      a[i][j]--;
    }
    reverse(a[i].begin(),a[i].end());
  }
  vector<P> q;
  auto check = [&](int i){
    if(a[i].size()==0) return;
    int j = a[i].back();
    if(a[j].size()==0) return;
    if(a[j].back()==i){
      P p(i,j);
      if(p.second<p.first) swap(p.first,p.second);
      q.push_back(p);
    }
  };
  rep(i,n){
    check(i);
  }
  int day = 0;
  while(q.size()>0){
    day++;
    sort(q.begin(),q.end());
    q.erase(unique(q.begin(),q.end()),q.end());
    vector<P> prevQ;
    swap(prevQ,q);
    for(P p : prevQ){
      int i = p.first,j=p.second;
      a[i].pop_back();
      a[j].pop_back();
    }
    for(P p : prevQ){
      int i=p.first,j=p.second;
      check(i);
      check(j);
    }
  }
  rep(i,n){
    if(a[i].size()!=0){
      puts("-1");
      return 0;
    }
  }
  cout << day << endl;
  return 0;
}

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
#define SUM(vec) accumulate(ALL((vec)), 0)  // 0 は初期値
#define COPY(vec1, vec2) copy(ALL(vec1), back_inserter(vec2))  // vec1をvec2にコピーする vec2は空にしておく必要あり

int main(){
  int n;cin >> n;
  vector<int> vec(n);
  rep(i,n) cin >> vec[i];
  int sum = SUM(vec);

  if(sum==0){cout << 0 << endl;return 0;}
  if(sum%n==0){
    int per_island = sum/n;
    vector<int> partial;
    COPY(vec,partial);
    rep(i,n){
      partial[i]-=per_island;
    }
    partial_sum(partial.begin(),partial.end(),partial.begin());
    int group=0,bridge=0;
    rep(i,n){
      group++;
      if(partial[i]==0){
        bridge+=group-1;
        group=0;
      }
    }
      cout << bridge << endl;
      return 0;
    }else{cout << -1 << endl;return 0;}
}

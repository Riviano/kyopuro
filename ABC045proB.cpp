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
  string a,b,c;cin >> a >> b >> c;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());

  int flag = 0;
  bool ef = false;
  while(!(a.empty()&&b.empty()&&c.empty())){
    if(flag==0){
        if(a.empty()) break;
        flag = a.back()-'a';
        a.pop_back();

    }
    if(flag==1){
        if(b.empty()) break;
        flag = b.back()-'a';
        b.pop_back();
    }
    if(flag==2){
        if(c.empty()) break;
        flag = c.back()-'a';
        c.pop_back();
    }
  }
  cout <<  char(flag+'A') << endl;
}

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
  string s;cin >> s;
  int n;cin >> n;
  for(int i=0;i<n;i++){
    string code;cin >> code;
    if(code=="replace"){
      int a,b;cin >> a >> b;
      string h;cin >> h;
      for(int i=0;i<h.size();i++){
        s[a+i]=h[i];
      }
    }
    if(code=="reverse"){
      int a,b;cin >> a >> b;
      for(int i=0;i<(b-a+1)/2;i++){
        char tmp = s[a+i];
        s[a+i] = s[b-i];
        s[b-i] = tmp;
      }
    }
    if(code=="print"){
      int a,b;cin >> a >> b;
      for(int i=a;i<=b;i++) cout << s[i];
      cout << endl;
    }
  }
}

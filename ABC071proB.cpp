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
  int a[26] = {0};
  string s;cin >> s;
  for(int i=0;i<s.size();i++){
    int k=s[i]-'a';
    a[k] = 1;
  }
  for(int i=0;i<26;i++){
    if(a[i]!=1){
      char t = i+'a';
      cout << t << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;

}

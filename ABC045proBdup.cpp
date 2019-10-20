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
  string sa,sb,sc;cin >> sa >> sb >> sc;
  queue<char> qa,qb,qc;
  int i,j,k;
  rep(i,sa.size()) qa.push(sa[i]);
  rep(i,sb.size()) qb.push(sb[i]);
  rep(i,sc.size()) qc.push(sc[i]);
  char ans = 'a';
  while(1){
    if(ans=='a'){if(qa.empty()) break;ans=qa.front();qa.pop();}
    if(ans=='b'){if(qb.empty()) break;ans=qb.front();qb.pop();}
    if(ans=='c'){if(qc.empty()) break;ans=qc.front();qc.pop();}
  }
  cout << (char)(ans+'A'-'a') << endl;
}

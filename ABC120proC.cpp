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
  string s;cin >> s;
  bool flag=true;
  priority_queue<int> que;
  while(flag){
    flag = false;
    rep(i,n-1){
      if(s[i]==0&&s[i+1]==1){//01
        flag = true;
        que.push(i);
      }
    }
    while(!que.empty){
      cout << "que.top " << que.top << endl;
      cout << "s.end()-que.pop()" << s.end()-que.top() << endl;
      int top = que.top();
      erase(s.end()-top);
      erase(s.end())
      que.pop();
    }
  

    rep(i,n-1){
      if(s[i]==1&&s[i+1]==0){//10
        flag = true;
        que.push(i);
      }
    }
    while(!que.empty){
      cout << "que.top " << que.top << endl;
      cout << "s.end()-que.pop()" << s.end()-que.top() << endl;
      int top = que.top();
      erase(s.end()-top);
      que.pop();
    }
  }

}

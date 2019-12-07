#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;
#define LEN 100010

struct P{
  char name[100];
  int t;
};

P Q[LEN];
int head,tail,n;

void enqueue(P x){
  Q[tail] = x;
  tail = (tail+1)%LEN;
}
P dequeue(){
  P x = Q[head];
  head = (head+1)%LEN;
  return x;
}
int main(){
  int gt = 0,c;
  int i,q;
  P u;
  cin >> n >> q;
  REP(i,1,n+1){
    cin >> Q[i].name;
    cin >> Q[i].t;
  }
  head = 1;tail = n+1;
  while(head!=tail){
    u=dequeue();
    c = min(q,u.t);
    u.t -= c;
    gt +=c;
    if(u.t>0) enqueue(u);
    else{
      cout << u.name << " " << gt << endl;
    }
  }
}

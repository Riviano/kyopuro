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
//for(auto &i:data) cout << i << " ";
//cout << endl;
int main(){
  int n,a,b,c;cin >> n >> a >> b >> c;
  vector<int> data(n);
  priority_queue<int> que;
  rep(i,n){
    int l;cin >> l;
    if(a!=-1&&l==a){a=-1;data.erase(data.begin()+i);continue;}
    if(b!=-1&&l==b){b=-1;data.erase(data.begin()+i);continue;}
    if(c!=-1&&l==c){c=-1;data.erase(data.begin()+i);continue;}
    data[i] = l;
  }
  int ans = 0;
  sort(data.begin(),data.end());
  reverse(data.begin(),data.end());
  if(a==-1&b==-1&&c==-1){cout << 0 << endl;return 0;}
  if(a!=-1) que.push(a);
  if(b!=-1) que.push(b);
  if(c!=-1) que.push(c);
  int key = que.top();
  cout << "key " << key << endl;
  while(!que.empty()){
    cout << "data:";
    for(auto &i:data) cout << i << " ";
    cout << endl;
    pair<int,pair<int,int>> mi;
    mi.first = 999999999;
    rep(i,data.size()){
      if(abs(data[i]-key)<mi.first){
        mi.first = abs(data[i]-key);
        mi.second.first = i;
        mi.second.second = -1;
        debug(mi.first);
      }
    }
    if(data.size()>1){
      rep(i,data.size()-1){
        REP(j,i+1,data.size()){
          if(mi.first>abs(data[i]+data[j]-key))
          mi.first = abs(data[i]+data[j]-key);
          mi.second.first = i;
          mi.second.second = j;
          debug(mi.first);
        }
      }
    }
    if(mi.second.second!=-1){
      data[mi.second.first]+=data[mi.second.second];
      data.erase(data.begin()+mi.second.second);
      debug(mi.second.first);
      debug(mi.second.second);
      ans+=10;
    }
    else{
      data.erase(data.begin()+mi.second.first);
      ans+=mi.first;
      debug(mi.second.first);
      debug(mi.second.second);
      que.pop();
      if(que.size()>1) key = que.top();
    }
    cout << "data:";
    for(auto &i:data) cout << i << " ";
    cout << endl;

  }
  cout << ans << endl;
}

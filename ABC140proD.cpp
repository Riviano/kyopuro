/*l = 1
r = 0
101001
(100100100)
(101001)<l
(011110)<r
(1001010010110)
xor
(1111011110110)

まず0が続いている所の0の数が多いところから変換
次に0が同じだったら0な所の数を１にした時の多いやつから処理
*/

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
  int n,k;cin >> n >> k;
  string s;cin >> s;
  vector<int> a(n);
  vector<pair<int,int>> b;
  for(int i=0;i<s.size();i++) a[i] = (s[i]=='L'?1:0);

  int i=0;
  while(i<n){
    int k=0;
    bool flag=false;
    if(a[i]==1) i++;
    int t=-1;
    while(a[i]==0&&i<n){
      if(!flag){
        flag = true;
        t=i;
      }
      k++;
      i++;
    }
    if(t!=-1) b.push_back(make_pair(k,t));
  }
  auto check = [&](){
    bool f = true;
    for(auto &i:b) {
      if(i.first!=b[0].first) f = false;
    }
    return f;
  };
  for(auto&i:b) cout << i.first << " " << i.second << endl;
  sort(b.begin(),b.end());
  for(auto &i:a) cout << i << " ";
  cout << endl;
  while(k){
    if(check()){
      rep(i,b.size()){
        int len = 0;
        int g = b[i].second;
        int q=g;
        while(q!=0&&a[i]==1){
          len++;
          q--;
        }//左
        q=g;
        while(q<b.size()&&a[i]==1){
          len++;
          q++;
        }//右
        b[i].first = len;
        debug(len);
        debug(b[i].second);
      }
      sort(b.rbegin(),b.rend());
    }
    for(int i=b[b.size()-1].second;a[i]==0;i++) a[i]^=1;
    for(auto &i:a) cout << i << " ";
    cout << endl;
    b.pop_back();
    k--;
  }
  for(auto &i:a) cout << i << " ";
  cout << endl;
}

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
  while(1){

    int x;cin >> x;
    if(x==1) break;
    vector<int> a,b;
    for(int i=8;i<=300000;i+=7){
      a.push_back(i);
    }//7n-6の計算
    for(int i=6;i<=300000;i+=7){
      b.push_back(i);
    }//7n-1の計算

    bool flag;
    bool aflag = true;
    auto iter_a = upper_bound(a.begin(),a.end(),x/2);//x/2以上のイテレータを渡す
    auto iter_b = upper_bound(b.begin(),b.end(),x/2);//x/2以上のイテレータを渡す

    vector<int> ans;
    for(auto i = b.begin();i!=iter_b;i++){
      if(x%(*i)==0){
        flag = true;
        for(auto &k:ans){
          if((*i)%k==0){
            flag = false;
            break;
          }//もし割り切れてもansの中のやつで割り切れるならbreak
        }
        if(flag){ans.push_back((*i));aflag = false;}
      }
    }//bの計算

    for(auto i = a.begin();i!=iter_a;i++){
      if(x%(*i)==0){
        flag = true;
        for(auto &k:ans){
          if((*i)%k==0){
            flag = false;
            break;
          }//もし割り切れてもansの中のやつで割り切れるならbreak
        }
        if(flag){ans.push_back((*i));aflag = false;}
      }
    }//aの計算
    sort(ans.begin(),ans.end());
    if(aflag){
      auto it = std::find(a.begin(), a.end(), x);    //  最初の要素5へのイテレータを返す
      if( it != a.end() ) {     // 発見した場合
        ans.push_back(x);
      }
      auto itr = std::find(b.begin(), b.end(), x);    //  最初の要素5へのイテレータを返す
      if( itr != b.end() ) {     // 発見した場合
        ans.push_back(x);
      }
    }//もし素因数がなかったら自分自身が素因数か確かめて、もし素因数ならansへ

    cout << x << ": ";
    rep(i,ans.size()-1) cout << ans[i] << " ";
    cout << ans[ans.size()-1] << endl;
    
  }
}

#include<bits/stdc++.h>
using namespace std;
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
typedef long long int Int;

int main(){
  int n;cin >> n;
  vector<pair<Int,Int>> vec(n);//aをx,bをy
  rep(i,n){
    Int a,b;cin >> a >> b;
    vec.push_back(make_pair(a,b));
  }
  set<pair<Int,Int>> vecs(vec.begin(),vec.end());//同じ点がないようにする
  vector<pair<Int,Int>> data(vecs.begin(),vecs.end());//純然たるdata
  if(data.size()<3){cout << 0 << endl;return 0;};
  sort(data.begin(),data.end());
  vector<int> datay = data;
  for(auto &i:datay){
    Int tmp = i.first;
    i.first = i.second;
    i.second = tmp;
  }

  sort(datay.begin(),datay.end());//datay : y,x
  if((data[data.size()-1].first-data[0].first)<=datay[data.size()-1].first-data[0]y.first){//yの幅の方が出かければ(x,y)から(y,x)にする
    data = datay;
  }
  sort(data.begin(),data.end());

  pair<Int,Int> left  (data[0].first,data[0].second);
  pair<Int,Int> right (data[data.size()-1].first,data[data.size()-1].second);
  long double a;
  if(right.first-left.first!=0) a = (right.second-left.second)/(right.first-left.first);//傾きを求めてる。
  else a=0;
  long double c= -a*left.first+left.second;//切片を求めてる
  long double d=0;
  Int dz;//距離の一番長い点の座標の添字
  REP(i,1,data.size()-1){
    long double dkana = abs(data[i].first*a-data[i].second+c)/sqrt(a*a+1);
    if(d<dkana){
      d = dkana;
      dz = i;
    }
  }
  long double ans = abs((right.first-left.first)*(data[dz].second-left.second)\
  - (data[dz].first-left.first)*(right.second-left.second))/2;
  //三角形の面積
  cout<<setprecision(5)<<fixed;
  cout<<ans<<endl;

  return 0;
}

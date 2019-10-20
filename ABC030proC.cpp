#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;
int main(){
  int n,m;
  int x,y;
  cin >> n >> m;
  cin >> x >> y;
  int a[n],b[m];
  int ans = 0;
  int t = a[0];
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];
  bool itiA=true;
  int i = 0;
  int j=0;
  while(i<n&&j<m){

    if(itiA){
      //cout << "ima a" << endl;
      if(t<a[i]) t = a[i];
      if(t>a[i]) i++;
      if(t==a[i]){
        t+=x;
      //  cout << "a出発b到着" << t << endl;
        itiA = false;
      }
    }
    else{
    //  cout << " ima b" << endl;
      if(t<b[j]) t = b[j];
      if(t>b[j]) j++;
      if(t==b[j]){
        t+=y;
        //cout << "b出発a到着" << t << endl;
        itiA = true;
        ans++;
      }
    }
  //  cout << "i " << i << "j " << j << endl;
  //  cout << "t " << t << " ans " << ans << endl;
}

  cout << ans << endl;
}

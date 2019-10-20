#include<bits/stdc++.h>
using namespace std;
int maxt(int x){
  return (x+9)/10*10;
}
int ret(int x){
  return maxt(x)-x;
}
int main(){
  int a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  int sum = maxt(a)+maxt(b)+maxt(c)+maxt(d)+maxt(e);
  sum -= max({ret(a),ret(b),ret(c),ret(d),ret(e)});
  cout << sum << endl;
  return 0;
}

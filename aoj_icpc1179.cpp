#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  vector<int> y(n),m(n),d(n);
  for(int i=0;i<n;i++){
    cin >> y[i] >> m[i] >> d[i];
    d[i]+=(y[i]/3)*200;
    d[i] += (y[i]-(y[i]/3))*195;

    if(y[i]%3==0) d[i] += m[i]*20;
    else{
      if(d[i]%2==0) d[i] += 39*m[i];
      else d[i] += (39*m[i])+20;
    }
    cout << d[i] << endl;
  }
}

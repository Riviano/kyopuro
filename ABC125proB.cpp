#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  int ans = 0;
  vector<int> v(n,0),c(n,0);
  for(auto &i:v) cin >> i;
  for(auto &i:c) cin >> i;
  for(int i=0;i<n;i++){
    if(v[i]-c[i]>=0) ans+=(v[i]-c[i]);
  }
  cout << ans << endl;
}

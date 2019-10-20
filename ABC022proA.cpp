#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,s,t,w=0;
  cin >> n >> s >> t;
  int ans = 0;
  for(int i=0;i<n;i++){
    int a;cin >> a;
    w+=a;
    if(s<=w&&w<=t) ans++;
  }
  cout << ans << endl;
}

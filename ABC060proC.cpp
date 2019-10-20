#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t;cin >> n >> t;
  int a[n];
  int ans = 0;
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n-1;i++){
    int sa = a[i+1]-a[i];
    if(sa<=t) ans+=sa;
    else{
      ans+=t;
    }

  }
  ans+=t;
  cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);

  int ans = 0;
  int k,s;cin >> k >> s;
  for(int x=0;x<=k;x++){
    int sa = s-x;
    for(int y=0;y<=k;y++){
      int t = sa-y;
      if(t>k||t<0) continue;
      //cout << x << " " << y << " " << t << endl;
      ans++;
    }
  }

  cout << ans << endl;
}

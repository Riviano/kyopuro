#include<bits/stdc++.h>
using namespace std;

int main(){
  int w,h,x,y;cin >> w >> h >> x >> y;
  double ans = (double)w*h/2;
  int num = (w==x*2&&h==y*2) ? 1:0;
  cout << ans << " " << num << endl;
  return 0;
}

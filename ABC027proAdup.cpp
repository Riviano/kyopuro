#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,z;
  cin >> x >> y >> z;
  int ans = 0;
  if(x==y) ans = z;
  if(y==z) ans = x;
  if(x==z) ans = y;
  cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
using LL = long long;
using VI = vector<int>;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int n;cin >> n;
  LL T = 0,gx = 0,gy = 0;
  for(int i=0;i<n;i++){
    LL t,x,y;
    cin >> t >> x >> y;
    LL dt = t-T;
    LL dx = abs(gx-x)+abs(gy-y);
    if(dx>dt||(dt-dx)%2 == 1){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}

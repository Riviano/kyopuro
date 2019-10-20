#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[14] = {0,14,2,3,4,5,6,7,8,9,10,11,12,13};
  int x,y;cin >> x >> y;
  if(a[x]==a[y]){
    cout << "Draw" << endl;
    return 0;
  }
  cout << (a[x]>=a[y]?"Alice":"Bob") << endl;
  return 0;
}

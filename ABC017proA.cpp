#include<bits/stdc++.h>
using namespace std;
int main(){
  int ans=0;
  for(int i=0;i<3;i++){
    int a,b;
    cin >> a >> b;
    ans += a*(0.1*b);
  }
  cout << ans << endl;
}

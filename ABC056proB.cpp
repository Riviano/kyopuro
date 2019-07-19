#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,a,b;
  cin >> w >> a >> b;
  if(a>b+w) cout << a-(b+w) << endl;
  else{
    if(b-(a+w)>=0)
    cout << b-(a+w) << endl;
    else cout << 0 << endl;
  }
}

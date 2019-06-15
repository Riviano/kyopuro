//20190525proC(atcoderABC)
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  int l=1,r=n;
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;
    l = max(l,a);
    r = min(r,b);
  }
  if(r-l+1>=0) cout << r-l+1 << endl;
  else{
    cout << 0 << endl;
  }
  return 0;
}

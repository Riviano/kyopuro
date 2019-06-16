#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x,ans=1,d=0,num=0;cin >> n >> x;
  vector<int> l(n,100000);
  for(int i=0;i<n;i++) cin >> l[i];
  int i=0;
  while(i!=n){
    d=num+l[i];
    if(d<=x) ans++;
    num = d;
    i++;
  }

  cout << ans << endl;
}

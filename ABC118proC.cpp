#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(a<b) return gcd(b,a);
  int r;
  while(r=a%b){
    a=b;
    b=r;
  }
  return b;
}
int main(){
  int n;
  cin >> n;
  vector<int> a(n,0);
  for(auto& i:a) cin >> i;
  int ans = a[0];
  for(int i=0;i<n;i++) ans = gcd(ans,a[i]);
  cout << ans << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,x,y;cin >> n >> k >> x >> y;
  cout << (n>k?k*x+(n-k)*y:n*x) << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  int wa=a+b,sa=a-b,seki=a*b;
  a= max({wa,sa,seki});
  cout << a << endl;
}

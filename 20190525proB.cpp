#include<bits/stdc++.h>
using namespace std;
int main(){
  int r,d,x,n;
  cin >> r >> d >> x;
  for(int i=1;i<=10;i++){
    n = x;
    x=r*n-d;
    cout << x << endl;
  }
  return 0;
}

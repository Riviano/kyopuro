#include<bits/stdc++.h>
using namespace std;
int gcd(int,int);
int main(){
  int x,y,ans;
  cin >> x >> y;
  ans = gcd(x,y);
  cout << ans << endl;
}

int gcd(int x,int y){
  if(y>x) swap(x,y);
  int tmp;
  while(1){
    tmp = x%y;
    if(tmp==0) return y;
    else{
      x = y;
      y = tmp;
    }
  }
}

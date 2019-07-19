#include<bits/stdc++.h>
using namespace std;
typedef long long int lint;

lint digit(int n){
  lint shift = 1;
  while(n){
    n /= 10;
    shift *= 10;
  }
  return shift;
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0;i < n; i++){
    cin >> a[i];
  }

  lint ans = 0;
  lint mod = 1e9 + 7;
  for(int i = 0; i < n; i++){
    ans = digit(a[i]) * ans + a[i];
    ans %= mod;
  }
  cout << ans << endl;
}

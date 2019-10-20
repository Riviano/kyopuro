#include<bits/stdc++.h>
using namespace std;
using Int = long long int;
map< int64_t, Int > prime_factor(int64_t n) {
  map< int64_t, Int > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}
Int gcd(Int a, Int b) {
 return b != 0 ? gcd(b, a % b) : a;
}

int main(){
  Int a,b;cin >> a >> b;
  set<Int> ai;

  Int gc = gcd(a,b);
  for(auto &i:prime_factor(gc)){
    while(i.second--){
      ai.insert(i.first);
    }
  }
  cout << ai.size()+1 << endl;

}

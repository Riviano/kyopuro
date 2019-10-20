#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;cin >> n;
  long long a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  long long minv=min({a,b,c,d,e});
  long long ans = ((n+minv-1)/minv)+4;
  cout << ans << endl;
}

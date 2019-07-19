#include<bits/stdc++.h>
using namespace std;

const int inf = 1001001001;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  vector<int> dp(n,inf);
  for(int i=0;i<n;i++) *lower_bound(dp.begin(),dp.end(),a[i]) = a[i];

  cout << lower_bound(dp.begin(),dp.end(),inf) - dp.begin() << endl;

}

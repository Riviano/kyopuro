#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  vector<int> s = a;
  sort(s.rbegin(),s.rend());
  for(int i=0;i<n;i++){
    int ans = a[0];
    if(s[0]==a[i]) ans = a[1];
    cout << ans << endl;
  }
}

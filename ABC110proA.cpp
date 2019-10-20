#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> a(3);
  for(auto& i:a) cin >> i;
  sort(a.begin(),a.end());
  cout<<a[2]*10+a[1]+a[0] << endl;
}

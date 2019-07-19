#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int max = 0,ans=0;
  for(int i=0;i<n;i++){
    if(max<a[i]){
      max = a[i];
      ans++;
    }
  }
  cout << ans << endl;
}

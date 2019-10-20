#include<bits/stdc++.h>
using namespace std;
using Int = long long;
signed main(){
  Int n;
  cin >> n;
  vector<string> vs(n);
  for(Int i=0;i<n;i++) cin >> vs[i];
  set<string> ss(vs.begin(),vs.end());
  if((Int)ss.size()!=n){
    cout << "No" << endl;
    return 0;
  }
  for(Int i=1;i<n;i++){
    if(vs[i-1].back()!=vs[i].front()){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
